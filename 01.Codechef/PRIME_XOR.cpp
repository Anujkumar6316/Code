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

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

void sol(){
	ll x,y;
	cin>>x>>y;
	ll a=2;
	while(!isPrime(x^a)){
		a++;
	}
	ll b=x^a;
	ll c=x^y^a;
	ll c1=x^y^b;
	if(isPrime(c))
		cout<<a<<" "<<b<<" "<<c<<endl;
	else
		cout<<a<<" "<<b<<" "<<c1<<endl;
}

int main(){
	_stdio();
	ll t;
	cin>>t;
	while(t--)
		sol();
}