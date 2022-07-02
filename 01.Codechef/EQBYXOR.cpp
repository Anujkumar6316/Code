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
	ll a,b,n;
	cin>>a>>b>>n;
	ll x=a^b;
	if(a==b)
		cout<<0<<endl;
	else if(x<n)
		cout<<1<<endl;
	else{
		x=((a^1)^b);
		if(x<n)
			cout<<2<<endl;
		else
			cout<<1<<endl;
	}
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}