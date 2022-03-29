// done

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
	if(n%2){
		for(int i=1;i<=n;i++)
			cout<<i<<" ";
		cout<<endl;
	}
	else if(n==2)
		cout<<"-1"<<endl;
	else{
		cout<<"2 3 1 4 ";
		for(int i=5;i<=n;i++)
			cout<<i<<" ";
		cout<<endl;
	}
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}