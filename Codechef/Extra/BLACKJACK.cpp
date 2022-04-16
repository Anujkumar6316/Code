#include <iostream>
using namespace std;

void sol(){
	int a,b;
	cin>>a>>b;
	int ans=21-(a+b);
	if(ans>=1 && ans<=10)
		cout<<ans<<endl;
	else
		cout<<"-1"<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--)
		sol();
}

//done