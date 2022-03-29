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
	ll b,c;
	cin>>b>>c;
	ll ans=1;
	if(c%2!=0){
		while(ans*b%c)
			ans+2;
	}
	else{
		ans++;
		while(ans*b%c)
			ans+2;
	}
	cout<<ans<<endl;
}

int main(){
	_stdio();
	ll t=1;
	cin>>t;
	while(t--)
		sol();
}