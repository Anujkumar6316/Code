// done

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

string sol(){
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	if((a+b)<=d && c<=e)
		return "Yes";
	else if((b+c)<=d && a<=e)
		return "Yes";
	else if((a+c)<=d && b<=e)
		return "Yes";

	return "No";
}

int main(){
	_stdio();
	int t;
	cin>>t;
	while(t--)
		cout<<sol()<<endl;
}