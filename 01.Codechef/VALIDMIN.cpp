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
	vector<int> v(3,0);
	for(int i=0;i<3;i++)
		cin>>v[i];
	sort(v.begin(),v.end());

	if(v[0]==v[1]){
		cout<<"YES"<<endl;
	}
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