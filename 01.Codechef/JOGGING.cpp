#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long int
#define m 1000000007
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

ll FastExponential(ll a,ll n){
	ll ans=1;
	while(n>0){
		int lastbit=n&1;
		if(lastbit){
			ans=(ans*a)%m;
		}
		a=(a*a)%m;
		n=n>>1;
	}
	return ans;
}

void sol(){
	ll n,x;
	cin>>n>>x;

	ll ans=((x*(FastExponential(2,n-1)-1))+x)%m;
	cout<<ans<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}