#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <unordered_map>
#define ll long long int
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

string sol(){
	int n;
	string str,o="",e="";
	cin>>n>>str;
	string ans=str;

	for(int i=0;i<n;i++){
		if(i%2)
			o.push_back(str[i]);
		else
			e.push_back(str[i]);
	}
	sort(o.begin(),o.end());
	sort(e.begin(),e.end());
	
	if(o!=e)
		return "NO";
		return "YES";
}

int main(){
	_stdio();
	int t;
	cin>>t;
	while(t--)
		cout<<sol()<<endl;
}