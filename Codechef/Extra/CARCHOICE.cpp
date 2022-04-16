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
	double x1,x2,y1,y2;
	cin>>x1>>x2>>y1>>y2;
	cout<<y2/x2<<endl;
	int ans=0;
	if(y1/x1<y2/x2)
		ans=-1;
	else if(y1/x1>y2/x2)
		ans=1;
	cout<<ans<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}