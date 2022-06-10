// done

#include <iostream>
#include <vector>
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
    freopen("/home/anuj/input.txt","r",stdin);
    freopen("/home/anuj/output.txt","w",stdout);
    #endif
}

vector<int> wavePrint(vector<vector<int>> arr, int n, int m)
{
    //Write your code here
    vector<int> ans;
    int startcol=0,row=0;
    while(startcol<m){
    	if(row==0){
    		for(int i=0;i<n;i++)
    			ans.push_back(arr[i][startcol]);
    		startcol++;
    		row=n-1;
    	}
    	else if(row==n-1){
    		for(int i=n-1;i>=0;i--)
    			ans.push_back(arr[i][startcol]);
    		startcol++;
    		row=0;
    	}
    }
    return ans;


}

void sol(){
	int n,m,a;
	cin>>n>>m;
	vector<vector<int>> arr;
	for(int i=0;i<n;i++){
		vector<int> tmp;
		for(int j=0;j<m;j++){
			cin>>a;
			tmp.push_back(a);
		}
		arr.push_back(tmp);
		tmp.clear();
	}
	vector<int> ans=wavePrint(arr,n,m);
	for(auto i:ans)
		cout<<i<<" ";
	cout<<endl;
}

int main(){
	_stdio();
	int t;
	cin>>t;
	while(t--)
		sol();
}