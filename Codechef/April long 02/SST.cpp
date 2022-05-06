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
	int a,b;
	cin>>a>>b;
	if(a*10>b*5)
		cout<<"FIRST"<<endl;
	else if(b*5>a*10)
		cout<<"SECOND"<<endl;
	else
		cout<<"ANY"<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}