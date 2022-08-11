// done

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
#define m 1000000007
void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

ll power(ll x,ll y){
	ll ans=1;
	while(y>0){
		int lastbit=y&1;
		if(lastbit)
		ans=(ans*x)%m;
		y=y>>1;
		x=(x*x)%m;

	}
	return ans;
}

void sol(){
	int n; cin>>n;
	int x=power(2,n-1);
	cout<<x<<endl;
}

int main(){
	_stdio();
	int t;
	cin>>t;
	while(t--)
		sol();
}