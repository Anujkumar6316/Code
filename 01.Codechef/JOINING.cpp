// done

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
	int n,k;
	cin>>n>>k;
	int r,x;
	if(n%5)
		r=n/5+1;
	else
		r=n/5;
	if(k%5)
		x=k/5+1;
	else
		x=k/5;
	if((r-x)>0)
		cout<<(r-x)<<endl;
	else
		cout<<0<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}