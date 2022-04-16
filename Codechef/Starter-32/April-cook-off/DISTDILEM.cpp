#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

void sol(){
	int n,a;
	cin>>n;
	vector<int> v1;
	for(int i=0;i<n;i++){
		cin>>a;
		v1.push_back(a);
	}
 	int flag=1;
 	// cout<<"outside loop: ";
 	// for(int i:v1)
 	// 	cout<<i<<" ";
	while(flag){
		flag=0;
		sort(v1.begin(),v1.end());
		for(int i=0;i<v1.size();i++){
			if(v1[i]==v1[i+1]){
				v1[i+1]=v1[i]+v1[i+1];
				// cout<<v1[i+1]<<" "<<v1[i]<<endl;
				v1.erase(v1.begin()+i);
			}
			for(int i:v1)
				cout<<i<<" ";
			cout<<endl;
		}
		cout<<"inside Loop:";
		for(int i=0;i<v1.size();i++){
			cout<<v1[i]<<" ";
			if(v1[i]==v1[i+1])
				flag=1;
		}
		// flag=0;
	}
	// for(int i:v1)
	// 	cout<<i<<" ";
	cout<<"-->";
	cout<<v1.size()<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}