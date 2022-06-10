// done

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
	int n;
	cin>>n;
	if(n<=50)
		cout<<100<<endl;
	else if(n<=100)
		cout<<50<<endl;
	else
		cout<<0<<endl;
}

int main(){
	_stdio();
	int t=1;
	// cin>>t;
	while(t--)
		sol();

}