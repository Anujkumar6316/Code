#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <iterator>
#define ll long long
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

void sol(){
	int n,m;
	cin>>n>>m;
	int a,b;
	set<int> edge;
	for(int i=1;i<=n;i++)
		edge.insert(i);
	while(m--){
		cin>>a>>b;
		edge.erase(a);
		edge.erase(b);
	}
	int ans=0;
	for(int i:edge)
		cout<<i<<" ";
	vector<int> v;
	// copy(edge.begin(),edge.end(),v.begin());
	// for(int i=0;i<v.size();i++){
	// 	ans=ans+(v[i+1]-v[i])*(v[i+1]-v[i]);
	// }
	cout<<ans<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}