#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>
#include <unordered_set>
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
	string s,r;
	cin>>s>>r;
	int count=0;
	for(int i=0;i<n;i++){
		if(s[i]!=r[i]){
			// cout<<s[i]<<endl;
			count++;
		}
	}
	// cout<<count<<" --> ";	
	if(count%2)
		cout<<0<<endl;
	else
		cout<<1<<endl;
}

int main(){
	_stdio();
	int t;
	cin>>t;

	while(t--)
	sol();
}