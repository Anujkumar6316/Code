#include <iostream>
#include <vector>
#include <bits\stdc++.h>
#define ll long long
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

void sol(){
	vector<int> l;
	int a;
	for(int i=0;i<4;i++){
		cin>>a;
		l.push_back(a);
	}
	sort(l.begin(),l.end());
	
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}