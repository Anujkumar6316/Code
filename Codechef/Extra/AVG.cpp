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
	int n,k,v,a,sum=0;
	cin>>n>>k>>v;
	for(int i=0;i<n;i++){
		cin>>a;
		sum+=a;
	}
	int x=(v*(n+k))-sum;
	if(x%k==0){
		if(x>0)
			cout<<x/k<<endl;
		else
			cout<<-1<<endl;
	}
	else
		cout<<-1<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}