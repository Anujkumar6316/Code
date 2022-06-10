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
	ll n;
	cin>>n;
	vector<ll> v(n);
	for(auto &i:v)
		cin>>i;

	int ans=0;
	for(int i=0;i<n-1;i++){
		if(v[i]+v[i+1]>ans)
			ans=v[i]+v[i+1];
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