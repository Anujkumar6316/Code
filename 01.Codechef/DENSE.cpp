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
	int n;
	cin>>n;
	string str;
	cin>>str;

	int x=0,ref=n/2,y=0;
	for(int i=0;i<n;i++){
		if(str[i]=='('){
			if(x<ref){
				x++;
			}
		}
		else{
			if(x<=ref)
				x--;
		}
	}
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}