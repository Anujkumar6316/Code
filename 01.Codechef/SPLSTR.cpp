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
	int n,k;
	string str;
	cin>>n>>k>>str;

	unordered_map<char,int> m;
	for(int i=0;i<n;i++)
		m[str[i]]++;

	int x=abs(m['0']-m['1']);
	int ans=x/k;
	if(x%k==0)
	cout<<ans<<endl;
	else
	cout<<ans+1<<endl; 			
}

int main(){
	_stdio();
	int t;
	cin>>t;

	while(t--)
	sol();
}