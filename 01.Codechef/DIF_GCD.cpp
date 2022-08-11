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
	ll n,m;
	cin>>n>>m;
	ll b=m;
	if(m%b)
		b=(m-(m%n));
	ll a=m-n;
	if(__gcd(a,b)<n)
		a=m;
	cout<<a<<" "<<b<<endl;
}

int main(){
	_stdio();
	int t;
	cin>>t;
	while(t--)
		sol();
}