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
	int n,x,y;
	cin>>n>>x>>y;
	int str=2*(n-1);
	int tl=min((x-1),(y-1));
	int tr=min((x-1),(n-y));
	int bl=min((n-x),(y-1));
	int br=min((n-x),(n-y));
	cout<<str+tl+tr+bl+br<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}