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
	int n;cin>>n;
	string str; cin>>str;
	string one,zero;
	for(int i=0;i<n;i++){
		if(str[i]=='0')
			zero.push_back('0');
		else
			one.push_back('1');
	}
	if(one.size()>zero.size())
		cout<<one<<endl;
	else
		cout<<zero<<endl;
}

int main(){
	_stdio();
	int t;
	cin>>t;
	while(t--)
		sol();
}