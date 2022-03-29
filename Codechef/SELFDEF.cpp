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
	int n,k,ans=0;
	cin>>n;
	while(n--){
		cin>>k;
		if(k>=10 && k<=60)
			ans++;
	}
	cout<<ans<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}