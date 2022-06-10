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

	int sol(){
		// a=-ve b=+ve;
		ll n,a=0,b=0,x,ans=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>x;
			if(x==-1)
				a++;
			else
				b++;
		}
		if((a+b)%2)
			return -1;
		else{
			return abs(a-b)/2;
		}
	}

	int main(){
		_stdio();
		int t=1;
		cin>>t;
		while(t--)
			cout<<sol()<<endl;

	}