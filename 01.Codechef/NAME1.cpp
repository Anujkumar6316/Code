// done

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
#include <unordered_map>

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

string sol(){
	string a,b;
	cin>>a>>b;
	unordered_map<char,int> m;

	for(int i=0;i<a.size();i++)
	m[a[i]]++;

	for(int i=0;i<b.size();i++)
		m[b[i]]++;

	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string tmp;
		cin>>tmp;
		for(int j=0;j<tmp.size();j++)
			m[tmp[j]]--;
	}

	for(auto i:m){
		if(i.second<0)
			return "NO";
	}
	return "YES";
}

int main(){
	_stdio();
	int t;
	cin>>t;
	while(t--)
		cout<<sol()<<endl;
}