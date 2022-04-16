#include <iostream>
#include<set>
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
	set<int> day={6,7,13,14,20,21,27,28};
	int n,k;
	cin>>n;
	while(n--){
		cin>>k;
		day.insert(k);
	}
	cout<<day.size()<<endl;
}

int main(){
	// _stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}