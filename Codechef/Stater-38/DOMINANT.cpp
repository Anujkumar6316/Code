#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin)
	freopen("/home/anuj/output.txt","w",stdout)
	#endif
}

void sol(){
	int a;
	vector<int> v;
	for(int i=0;i<3;i++){
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	if((v[0]+v[1])<v[2])
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}