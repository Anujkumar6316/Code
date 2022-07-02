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
	ll n;
	cin>>n;
	vector<ll> v(n);
	for(auto &i: v)
		cin>>i;
	sort(v.begin(),v.end(),greater<int> ());
	cout<<(v[0]-v[n-1])*v[1]<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}