//done

#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

void sol(){
	int x,y;
	cin>>x>>y;
	if(x*100 < y*10)
		cout<<"Disposable"<<endl;
	else
		cout<<"Cloth"<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}