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
	int n,s;
	cin>>n>>s;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int i=0,j=0;
	int sum=0;
	while(sum!=s){
		sum=sum+a[j];
		j++;
		if(sum>s){
			j=i+1;
		}
	}
	cout<<i<<" "<<j<<endl;
}

int main(){
	_stdio();
	int t=1;
	// cin>>t;
	while(t--)
		sol();
}