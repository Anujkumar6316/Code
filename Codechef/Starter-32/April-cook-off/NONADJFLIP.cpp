#include <iostream>
#include <vector>
#define ll long long
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

void sol(){
	int n;
	cin>>n;
	string str,str1(n,'0');
	cin>>str;


	int ans=0;
	vector<int> index;
	while(str!=str1){
		index.clear();
		for(int i=0;i<n;i++){
			if(str[i]=='1'){
				index.push_back(i);
				i+=1;
			}
		}
		for(int j: index){
			if(str[j]=='0')
				str[j]='1';
			else
				str[j]='0';
		}
		ans++;
	}
	cout<<ans<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}