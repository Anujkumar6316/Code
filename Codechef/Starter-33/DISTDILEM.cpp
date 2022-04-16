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
	int n,a;
	cin>>n;
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>a;
		sum+=a;
	}
	int i=0,j=0;
	int ans=0;
	while(j>=0){
		j=sum-(i+1);
		sum=j;
		i++;
		ans++;
	}
	cout<<ans-1<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}