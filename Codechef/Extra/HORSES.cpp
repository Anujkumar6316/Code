#include <iostream>
#include <vector>
#include <climits>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

void sol(){
	int n,a;
	cin>>n;
	vector<int> s;
	for(int i=0;i<n;i++){
		cin>>a;
		s.push_back(a);
	}
	sort(s.begin(),s.end());
	// vector<int> ans;
	int min=INT_MAX;
	for(int i=0;i<n-1;i++){
		if(abs(s[i]-s[i+1])<min)
			min=abs(s[i]-s[i+1]);
	}
	cout<<min<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}