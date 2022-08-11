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

void sol(){
	ll a,b,n;
	cin>>a>>b>>n;
	if(a%b==0 || b%a==0)
		cout<<-1<<endl;
	else{
		if(n%a)
			n=n+(a-(n%a));
		while(n%b==0){
			// if()
			n=n+a;
		}
		cout<<n<<endl;
	}
}

int main(){
	_stdio();
	int t;
	cin>>t;
	while(t--)
		sol();
}