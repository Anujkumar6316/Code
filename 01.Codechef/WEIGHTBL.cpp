// done

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

int sol(){
	int w1,w2,x1,x2,M;
	cin>>w1>>w2>>x1>>x2>>M;
	int _min=w1+(M*x1);
	int _max=w1+(M*x2);

	if(w2>=_min && w2<=_max)
		return 1;
	return 0;
}

int main(){
	_stdio();
	int t;
	cin>>t;
	while(t--)
		cout<<sol()<<endl;
}