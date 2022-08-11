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
	int n;
	cin>>n;
	unordered_map<int,int> m;

	for(int i=0;i<n;i++){
		int x;cin>>x;
		m[x]++;
	}

	vector<int> v;
	for(auto i:m)
		v.push_back(i.second);

	sort(v.begin(),v.end());
	int ans=v[v.size()-1]/2;
	if(v[v.size()-1]%2)
		ans++;

	if(v.size()==1)
	cout<<ans;
	else
	cout<<max(ans,v[v.size()-2]);
	cout<<endl;		
}

int main(){
	_stdio();
	int t;
	cin>>t;

	while(t--)
	sol();
}