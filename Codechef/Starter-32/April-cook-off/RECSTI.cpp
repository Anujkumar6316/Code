#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
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
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	int pair=0,ans=0;
	int i=0;
	while(i<n){
		if(a[i]-a[i+1]!=0){
			ans++;
			i--;
		}
		else{
			pair++;
		}
		i+=2;
	}
	pair=pair+ans;
	int x=0;
	if(pair%2!=0){
		do{
			x++;
			pair=pair+x;
		}while(pair%2!=0);
	}
	cout<<x*2+ans<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}