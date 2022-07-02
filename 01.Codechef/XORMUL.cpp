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

ll FastExponential(ll a,ll n){
	ll ans=1;
	while(n>0){
		ll lastbit=n&1;
		if(lastbit){
			ans=ans*a;
		}
		a=a*a;
		n=n>>1;
	}

	return ans;
}
ll max_xor(ll a){
	ll x=0,i=0;
	if(a==0)
		return 1;
	while(a>0){
		x=x+(FastExponential(2,i)*!(a&1));
		// cout<<FastExponential(2,i)<<"-->"<<(a&1)<<" ";
		a=a>>1;
		i++;
	}
	return x;
}

void sol(){
	ll n,a,b;
	cin>>n>>a>>b;
	ll x=max_xor(a);
	ll y=max_xor(b);

	ll limit=FastExponential(2,n);

	cout<<x<<" "<<y<<" "<<limit<<endl;
	if((x<limit )&& (y<limit)){
			cout<<((a^x)+(b^x))<<" "<<((a^y)+(b^y))<<" ";

		if(((a^x)+(b^x))>=((a^y)+(b^y))){
			cout<<x<<endl;
		}
		else
			cout<<y<<endl;
	}
	else if((x<limit) && (y>=limit)){
		cout<<'a'<<" ";
		cout<<x<<endl;
	}
	else if((y<limit) && (x>=limit))
		cout<<y<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}