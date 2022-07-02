#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <map>
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
	ll ans=0;
	unordered_map<ll,ll> m;
	for(ll i=1;i<=n/2;i++){
		ll g=__gcd(i,n-i)+lcm(i,n-i);
		// cout<<"g("<<i<<","<<n-i<<")-->"<<g<<endl;
		m[g]++;
	}
	ans=m[0,1];
	for(auto i:m){
		// cout<<i.first<<"--> "<<i.second<<endl;
		if(ans<i.second)
			ans=i.second;
	}
	cout<<ans*2<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}