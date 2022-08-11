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
	int n,ans=0;
	cin>>n;

	for(int i=1;i<=n;i++){
		if(i%2){
			ans=ans+(n-i+1)*(n-i+1);
		}
	}
	cout<<ans<<endl;
}

int main(){
	_stdio();
	int t;
	cin>>t;
	while(t--)
		sol();
}