#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#define ll long long int
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

void sol(){
	int n;cin>>n;
	unordered_set<int> s;
	vector<int> v(n,0);
	for(int i=0;i<n;i++){
		cin>>v[i];
		s.insert(v[i]);
	}	
	sort(v.begin(),v.end());
	while(s.size()!=1){
		int pivot=v[v.size()-1],i=1;
		while(pivot>0){
			int x=v[v.size()-i-1]-v[v.size()-i-2];
			pivot-=x;
			if(pivot<0)
				v[v.size()-i-2]+=
		}
	}
}

int main(){
	_stdio();
	int t;
	cin>>t;

	while(t--)
	sol();
}