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
	long long int x,y,z,k;
	cin>>x>>y>>z;
	int flag=0;
	if(z!=1){
		for(k=x+1;k<=1000000000;k++){
			if(k%y==0 && k%z!=0){
				flag=1;
				break;
			}
		}
	}
		
	if(flag)
		cout<<k<<endl;
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