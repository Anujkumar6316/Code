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

long long sumofdigit(int n){
	int sum=0,m;
	while(n>0)    
	{    
		m=n%10;    
		sum=sum+m;    
		n=n/10;    
	}   
	return sum;
}

void sol(){
	long long str,i=1;
	cin>>str;
	// cout<<sumofdigit(str)<<endl;
	int tmp=sumofdigit(str);
	// cout<<str<<"-->"<<tmp<<endl;
	if(tmp%2==0){
		while(sumofdigit(str)%2==0){
			str+=i;
		}
	}
	cout<<str<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}