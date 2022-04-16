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
	int n,a,b;
	cin>>n>>a>>b;
	if((a-b)==1 || (b-a)==1){
		if(a==1 || b==1 || a==n || b==n)
			cout<<1<<endl;
		else
			cout<<2<<endl;
	}
	else if((a-b)==2 || (b-a)==2)
		cout<<1<<endl;
	else
		cout<<0<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}