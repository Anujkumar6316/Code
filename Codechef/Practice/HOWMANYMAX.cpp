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
	ll n,ans=0;
	cin>>n;
	string str;
	cin>>str;


	if(n==2)
		cout<<1<<endl;
	continue;
	if(str[0]=='1')
		ans++;
	if(str[n-2]=='0')
		ans++;
	if(str.size()>=3){
	for(int i=0;i<str.size()-2;i++){
		if(str.substr(i,2)=="01")
			ans++;
	}
	}
	cout<<ans<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}