// done

#include <iostream>
#include <vector>
#define ll long long int
#include <cstdlib>
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

void sol(){
	int a,b;
	cin>>a>>b;
	cout<<abs(a-b)<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}