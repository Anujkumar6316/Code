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

int roots(int c){
	int det=1+(4*c);
	int a=(-1+sqrt(det))/2;
	return (int)a;

}

void sol(){
	int a,b;
	cin>>a>>b;
	int x=(int)sqrt(a);
	int y=roots(b);
	// cout<<x<<" "<<y<<"-->";
	if(x>y)
		cout<<"Limak"<<endl;
	else
		cout<<"Bob"<<endl;
}

int main(){
	_stdio();
	int t;
	cin>>t;
	while(t--)
		sol();
}