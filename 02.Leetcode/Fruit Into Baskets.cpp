#include <iostream>
#include <vector>
#include <map>
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
	int n; cin>>n;

	vector<int> v(n);
	unordered_map<int,int> m;
	for(auto *i:v){
		cin>>i;
		m[i]++;
	}

	int ans=0;
	for(int i=0;i<n-1;i++){
		int a=v[i],b=;
		for(int k=i+1;k<n)
		for(int j=i+1;j<n;j++){
		}
	}
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}