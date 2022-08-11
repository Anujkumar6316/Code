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
	ll x,y,n,r;
	cin>>x>>y>>n>>r;
	ll X=n,Y=0;
	while(n>0){
		ll rem=r-((n-1)*x+Y*y);
		if(rem>=y){
			X--;
			Y++;
			n--;
		}
		else
			break;
	}
	if((x*n)>r)
		cout<<-1<<endl;
	else
		cout<<X<<" "<<Y<<endl;
}

int main(){
	_stdio();
	int t;
	cin>>t;
	while(t--)
		sol();
}