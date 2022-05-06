// DONE

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
	int n,x,a,sum=0;
	cin>>n>>x;
	for(int i=0;i<n-1;i++){
		cin>>a;
		sum+=a;
	}
	if(((x*n)-sum)>0)
		cout<<(x*n)-sum<<endl;
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