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
	ll n,a,maxele=0;
	cin>>n;
	unordered_map<ll,ll> m;
	for(int i=0;i<n;i++){
		cin>>a;
		m[a]++;
		maxele=max(maxele,a);
	}

	ll ans=0,maxcount=0;
	for(auto j:m){
		if(j.second==1)
			ans++;
		maxcount=max(maxcount,j.second);
	}
	if(ans%2==0)
		cout<<ans/2<<endl;
	else{
		ll x=(ans+1)/2;
		if(m[maxele]==1){
			if(maxcount==2)
				x++;
		}
		cout<<x<<endl;
	}
}


int main(){
	_stdio();
	int t;
	cin>>t;
	while(t--)
		sol();
}