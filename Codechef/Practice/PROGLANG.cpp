// done

#include <iostream>
#include <vector>
#include <set>
#define ll long long int
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

void sol(){
	int a,b,a1,a2,b1,b2;
	cin>>a>>b>>a1>>a2>>b1>>b2;
	set<int> s1,s2;
	s1.insert(a1);
	s1.insert(a2);
	s1.insert(a);
	s1.insert(b);
	s2.insert(b1);
	s2.insert(b2);
	s2.insert(a);
	s2.insert(b);
	if(s1.size()<=2)
		cout<<1<<endl;
	else if(s2.size()<=2)
		cout<<2<<endl;
	else
		cout<<0<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}