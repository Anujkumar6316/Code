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
	ll n,a;
	cin>>n;
	vector<ll> v;
	cin>>a;
	v.push_back(a);
	ll r=a;
	for(ll i=1;i<n;i++){
		cin>>a;
		v.push_back(a);
		r=__gcd(r,a);
	}
	if(r!=1)
		cout<<n<<endl;
	else{
		ll ans=0;
		for(ll i=0;i<n;i++){
			ll k=i+1;
			ll x=v[i+1];
			for(ll j=0;j<n-1;j++){
				x=__gcd(x,v[k%n]);
				k++;
			}
			if(x!=r)
				ans++;
		}
		cout<<ans<<endl;
	}

}

ll _gcd(ll a, ll b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

void sol2(){
	ll n;
	cin>>n;
	vector<int> v;
	for(ll i=0;i<n;i++){
		ll a;
		cin>>a;
		v.push_back(a);
	}

	ll gcd=v[0];
	for(ll i=1;i<n;i++){
		gcd=_gcd(gcd,v[i]);
	}

	ll ans=0;
	if(gcd!=1)
		cout<<n<<endl;

	else{
		ll ans=0;
		for(int i=0;i<n;i++){
			ll tmp=v[i+1];
			ll x=i+2;
			for(int j=0;j<n-2;j++){
				tmp=_gcd(tmp,v[x%n]);
				x++;
			}
			if(tmp!=gcd)
				ans++;
		}
		cout<<ans<<endl;
	}
}

int main(){
	_stdio();
	ll t=1;
	cin>>t;
	while(t--)
		sol2();

}