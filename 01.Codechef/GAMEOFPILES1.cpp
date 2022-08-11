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
	int n;
	cin>>n;
	int odd=0;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		if(a%2)
			odd++;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	if(v[0]==1)
		cout<<"chef"<<endl;
	else if(odd%2)
		cout<<"chef"<<endl;
	else 
		cout<<"chefina"<<endl;
}

int main(){
	_stdio();
	int t;
	cin>>t;
	while(t--)
		sol();
}