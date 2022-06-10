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
	set<ll> v;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a!=0)
			v.insert(a);
	}

	cout<<v.size()<<endl;

}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}