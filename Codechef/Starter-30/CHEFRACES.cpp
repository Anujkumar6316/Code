#include <iostream>
#include <vector>
#include <set>
#define ll long long
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

void sol(){
	int x,y,a,b;
	set<int> v;
	cin>>x>>y>>a>>b;
	v.insert(x);
	v.insert(y);
	v.insert(a);
	v.insert(b);
	cout<<(v.size()-2)<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}