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
	int n,a,sum=0;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin>>a;
		sum+=a;
		v.push_back(a);
	}
	int ans=0;
	double tmp=double(sum)-(double(sum)*(n-2)/double(n));
	// cout<<tmp<<"-->";
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(v[i]+v[j]==tmp)
				ans++;
		}
	}
	cout<<ans<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}