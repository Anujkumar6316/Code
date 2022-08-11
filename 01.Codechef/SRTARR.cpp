#include <iostream>
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
	string str;
	cin>>str;
	
	int ans=0;
	for(int i=0;i<n-1;i++){
		if(str.substr(i,2)=="10")
			ans++;
	}
	cout<<ans<<endl;
}

int main(){
	_stdio();
	ll t;
	cin>>t;
	while(t--)
		sol();
}