#include <iostream>
#include <vector>
#define ll long long
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

void sol(){
	int n,x;
	cin>>n>>x;
	// cout<<(n-x)<<endl;
	cout<<n;

}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}