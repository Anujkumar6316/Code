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
	ll n;
	cin>>n;
	ll ref=n/2;
	if(n%2)
		ref++;
	vector<ll> a(n,0);
	for(int i=0;i<n;i++)
		cin>>a[i];

	ll ans=0,i=0,sum=0;
	sort(a.begin(),a.end());
	while(sum<ref){
		sum+=a[i];
		i++;
	}
	if(ref==sum)
	cout<<i<<endl;
	else
		cout<<i-1<<endl;
}

int main(){
	_stdio();
	int t;
	cin>>t;
	while(t--)
		sol();
}