// done

#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

void sol(){
	int x,y;
	cin>>x>>y;
	if(3*x>2*y)
		cout<<2*y<<endl;
	else
		cout<<3*x<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}