#include <iostream>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}
ll gcd(ll a, ll b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    if (a == b)
        return a;
  
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

void sol2(){
	ll a,b;
	cin>>a>>b;
	if(a==1 || b==1)
		cout<<-1<<endl;
	else if(gcd(a,b)==1)
		cout<<1<<endl;
	else
		cout<<0<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol2();
}