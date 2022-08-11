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
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	int p1=abs(x1-x2)%2;
	int p2=abs(y1-y2)%2;
	if(p1==p2)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}

int main(){
	_stdio();
	int t;
	cin>>t;
	while(t--)
		sol();
}