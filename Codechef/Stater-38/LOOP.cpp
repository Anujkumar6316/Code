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
	long long int m,a,b;
	cin>>a>>b>>m;
	cout<<min(abs(b-a),abs(m-abs(b-a)))<<endl;

}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}