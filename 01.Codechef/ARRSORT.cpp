#include <iostream>
#include <vector>
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
	int n; 
	cin>>n;

	vector<int> v;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	int ans=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			int x=v[i]-v[j];
			if(x>ans)
				ans=x;
		}
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)
		sol();
}