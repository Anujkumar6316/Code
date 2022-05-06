// DONE

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
	int n,x;
	cin>>n>>x;
	for(int i=1;i<=n/2;i++)
		cout<<x-i<<" "<<x+i<<" ";
	if(n%2)
		cout<<x<<" ";
	cout<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}