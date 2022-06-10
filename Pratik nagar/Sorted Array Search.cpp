#include<iostream>
#include <vector>
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
    freopen("/home/anuj/input.txt","r",stdin);
    freopen("/home/anuj/output.txt","w",stdout);
    #endif
}

// M1 --> brute force
// done
void bruteforce(vector<vector<int>> v,int ele,int n,int m){
	int flag=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(ele==v[i][j]){
				cout<<i+1<<","<<j+1<<endl;
				flag=1;
			}
		}
	}
	if(flag==0)
		cout<<"Element not found"<<endl;
}

// M2 --> binary search in each row..
// done
int binarySearch(vector<int> v,int ele){
	int i=0,j=v.size()-1;
	while(i<=j){
		int mid=(i+j)/2;
		if(v[mid]==ele)
			return mid;
		else{
			if(v[mid]>ele){
				j=mid-1;
			}
			else
				i=mid+1;
		}
	}
	return -1;
}

// M3 --> stair case..
void stairCase(vector<vector<int>> v,int ele,int n,int m){
	int i=0,j=m-1,flag=0;
	while(i<n && j>=0){
		int ref=v[i][j];
		if(ref==ele){
			cout<<i+1<<","<<j+1<<endl;
			flag=1;
			break;
		}
		else if(ref>ele)
			j--;
		else if(ref<ele)
			i++;
	}
	if(flag==0)
		cout<<"Element is not found"<<endl;
}

void Bseach(vector<vector<int>> v,int ele,int n,int m){
	int flag=0;
	for(int i=0;i<n;i++){
		int x=binarySearch(v[i],ele);
		if(x!=-1){
			cout<<i+1<<","<<x+1<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0)
		cout<<"Element not found"<<endl;
}

// find the element in 2d sorted array..
void sol(){
	int n,m,a;
	cin>>n>>m;
	vector<vector<int>> v;
	for(int i=0;i<n;i++){
		vector<int> tmp;
		for(int j=0;j<m;j++){
			cin>>a;
			tmp.push_back(a);
		}
		v.push_back(tmp);
		tmp.clear();
	}
	int ele=6*2;

	bruteforce(v,ele,n,m);
	Bseach(v,ele,n,m);
	stairCase(v,ele,n,m);
}

int main(){
	_stdio();
	int t;
	cin>>t;
	while(t--)
		sol();
}