#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

void sol(){
	string str;
	cin>>str;
	int flag=0,n=str.size();
	for(int i=0;i<n-3;i++){
		if(str.substr(i,3)=="010" || str.substr(i,3)=="101"){
			cout<<"Good"<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0)
		cout<<"Bad"<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}