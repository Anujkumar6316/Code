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
	long long int n;
	cin>>n;
	long long int b=1;
	for(int i=2;i<=n;i++){
		if(i%2){
			b=b&i;
		}
		else
			b=b^i;
	}
	cout<<b<<endl;
}

void sol2(){
	long long int n,ans=0;
	cin>>n;
	if(n%2==0 && n%4==0)
		ans=3^n;
	else if(n%2==0)
		ans=3;
	else{
		if((n-1)%4==0){
			ans=(3^(n-1))&n;
		}
		else
			ans=3;
	}
	cout<<ans<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol2();
}