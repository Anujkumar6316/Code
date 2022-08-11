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
	int n;cin>>n;
	vector<int> v(n,0);
	vector<int> z;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	if(z.size()==0)
		cout<<(n*(n+1))/2<<endl;
	else if(z.size()==n)
		cout<<0<<endl;
	else{
		int ans=(z[0]*(z[0]+1))/2;
		for(int i=1;i<z.size();i++){
			ans=ans+((z[i]-z[i-1]-1)*(z[i]-z[i-1]))/2;
		}
		ans=ans+((n-z[z.size()-1]-1)*(n-z[z.size()-1]))/2;
		cout<<ans<<endl;
	}
}

void sol2(){
	int n;cin>>n;
	vector<int> v(n,0);
	for(int i=0;i<n;i++)
		cin>>v[i];
	ll ans=0,tmp=0;
	for(auto i:v){
		if(i==1){
			tmp++;
		}
		else if(i==0){
			ans+=(tmp*(tmp+1))/2;
			tmp=0;
		}
	}
	ans+=(tmp*(tmp+1))/2;
	cout<<ans<<endl;
}

int main(){
	_stdio();
	int t;
	cin>>t;
	while(t--)
		sol2();
}