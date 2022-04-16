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
	int n;
	cin>>n;
	int a,odd=0,even=0;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a%2)
			odd++;
		else
			even++;
	}
	int ans=0;
	if(odd>even)
		ans=even;
	else if(!odd || !even)
		ans=0;
	else{
		ans=odd/2;
		if(odd%2)
			ans=ans+even;
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