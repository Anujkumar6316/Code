#include <iostream>
#include <vector>
#define ll long long
using namespace std;

void sol(){
	int n;
	cin>>n;
	int ans=n/10;
	if(n%10>0)
		ans=ans+1;
	cout<<ans<<endl;
}

int main(){
	#ifndef online_judge
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif

	int t=1;
	cin>>t;
	while(t--)
		sol();
}
//done