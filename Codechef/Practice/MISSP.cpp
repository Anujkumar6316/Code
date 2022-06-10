// done

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <map>
#define ll long long int
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

void sol(){
	int n,a;
	cin>>n;
	unordered_map<int, int> m;
	for(int i=0;i<n;i++){
		cin>>a;
		m[a]++;
	}
	int flag=0;
	for(auto i:m){
		if(i.second%2!=0){
			flag=1;
			cout<<i.first<<endl;
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