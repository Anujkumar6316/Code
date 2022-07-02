// done

#include <iostream>
#include <vector>
#include <algorithm>
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
	string a,b;
	cin>>a>>b;
	set<char> s;
	for(int i=0;i<a.size();i++){
		if(a[i]!=b[i])
			s.insert(b[i]);
	}
	cout<<s.size()<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}