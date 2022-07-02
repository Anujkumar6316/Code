#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

void sol(){
	int n,x;
	cin>>n>>x;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}

	int flag=0;

	for(int i=0;i<n-1;i++){
		if(v[i]>v[i+1] && (v[i]+v[i+1])>x){
			flag=1;
			break;
		}
		else if(v[i]>v[i+1] && (v[i]+v[i+1])<=x)
			swap(v[i],v[i+1]);
	}

	if(flag==0)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}