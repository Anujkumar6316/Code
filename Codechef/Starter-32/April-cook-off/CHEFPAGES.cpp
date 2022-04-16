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
	int a,b;
	cin>>a>>b;
	if(a==1&&b==0)
		cout<<"https://www.codechef.com/contests"<<endl;
	else if(a==0&&b==1)
		cout<<"https://www.codechef.com/practice"<<endl;
	else
		cout<<"https://discuss.codechef.com"<<endl;
}

int main(){
	_stdio();
	int t=1;
	// cin>>t;
	while(t--)
		sol();
}