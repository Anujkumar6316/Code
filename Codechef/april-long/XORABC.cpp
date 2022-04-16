#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}

void sol(){
	ll n;
	cin>>n;
	ll x=n&~(n-1);
	if(n%2 || isPowerOfTwo(n))
		cout<<-1<<endl;
	else{
		cout<<x/2<<" "<<n/2<<" "<<(n-x)/2<<endl;
	}
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}