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
	int n,x,y;
	cin>>n>>x>>y;
	string str;
	cin>>str;
	if(x<y)
		sort(str.begin(),str.end());
	else{
		sort(str.begin(),str.end());
		reverse(str.begin(),str.end());
	}
	int ans=0;
	for(int i=0;i<n;i++){
		if(str[i]=='1'&&str[i+1]=='0'){
			ans+=y;
		}
		else if(str[i]=='0'&&str[i+1]=='1')
			ans+=x;
	}
	// cout<<str<<"-->";
	cout<<ans<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}