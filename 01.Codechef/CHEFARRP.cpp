// done

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
	int n;
	cin>>n;
	vector<ll> v;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}


	ll ans=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			ll sum=0,product=1;
			for(int k=i;k<=j;k++){
				// cout<<v[k]<<" ";	
				sum+=v[k];
				product*=v[k];
			}
			if(sum==product)
				ans++;
			// cout<<endl;
		}
	}

	cout<<ans<<endl;
}

int main(){
	_stdio();
	int t;
	cin>>t;
	while(t--)
		sol();
}