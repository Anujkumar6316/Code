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
	ll n,k,v,sum=0;
	cin>>n>>k>>v;
	vector<ll> a(n);
	for(auto &i:a){
		cin>>i;
		sum+=i;
	}
	ll ans=((v*(n+k))-sum);
	if(ans%k)
		ans=-1;
	else
		ans=ans/k;
	if (ans>=0)
		cout<<ans<<endl;
	else
		cout<<-1<<endl;
}	

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}