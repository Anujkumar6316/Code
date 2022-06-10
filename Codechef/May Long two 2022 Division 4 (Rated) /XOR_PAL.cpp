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
	ll a,x;
	cin>>a;
	if(a%2)
		x=(a/2);
	else
		x=(a/2)-1;
	string str;
	cin>>str;
	ll ans=0;
	for(int i=0;i<=x;i++){
		if(str[i]!=str[str.size()-1-i])
			ans++;
	}
	if(ans%2)
		cout<<ans/2+1<<endl;
	else
		cout<<ans/2<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}