
// PUSH7PA--> https://www.codechef.com/problems/PUSH7PA

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
	ll n,x;
	cin>>n;
	unordered_map<ll ,ll> m;
	for(ll i=0;i<n;i++){
		cin>>x;
		m[x]++;
	}
	ll max=0;
	for(auto i: m){
		ll tmp=i.first+(i.second-1);
		if(tmp>max){
			max=tmp;
		}
	}
	cout<<max<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}