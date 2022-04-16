#include <iostream>
#include <vector>
#include <climits>
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
	ll n,a;
	cin>>n;
	vector<ll> v;
	for(int i=0;i<n;i++){
		cin>>a;
		v.push_back(a);
	}
	ll ans=LLONG_MAX;
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n;j++){
			if(a[i]+a[j]<ans)
		}
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