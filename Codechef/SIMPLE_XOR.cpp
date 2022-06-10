// not working..

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
	ll l,r;
	cin>>l>>r;
	int flag=0;
	for(int i=l;i<=r;i++){
		if((2*i)^(2*i+1)^(2*i+2)^(2*i+3)==0 && (2*i+3)<=r){
			flag=1;
			cout<<(2*i)<<" "<<(2*i+1)<<" "<<(2*i+2)<<" "<<(2*i+3)<<endl;
			break;
		}
	}
	if(flag==0)
		cout<<-1<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}