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
	ll a,b, ans=n-2;
	for(int i=2;i<n/2;i++){
		a=i,b=n-i;
		int tmp=((a*b)/__gcd(a,b))-__gcd(a,b);
		if(tmp>ans)
			ans=tmp;
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