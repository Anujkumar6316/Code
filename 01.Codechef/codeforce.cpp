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
	int n,c,q;
	cin>>n>>c>>q;
	string str;
	cin>>str;
	int l,r,a;
	for(int i=0;i<c;i++){
		cin>>l>>r;
		str.append(str.substr(l-1,r-l+1));
	}

	for(int i=0;i<q;i++){
		cin>>a;
		cout<<str[a-1]<<endl;
	}
}

int main(){
	_stdio();
	int t;
	cin>>t;
	while(t--)
		sol();
}