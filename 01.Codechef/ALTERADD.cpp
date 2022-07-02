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
	ll a,b;
	cin>>a>>b;
	if(!((b-a)%3) || !(((b-a)-1)%3))
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}