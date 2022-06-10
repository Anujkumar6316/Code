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

string sol(){
	ll n,x;
	cin>>n>>x;
	if(n%2 && x%2 && n>x)
		return "yes";
	else if(n%2==0 && n>x)
		return "yes";
	return "no";
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		cout<<sol()<<endl;

}