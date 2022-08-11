// done

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

void sol(){
	int maxT,maxN,sumN;
	cin>>maxT>>maxN>>sumN;


	ll ans=0;
	while(sumN>=0 && maxT>0){
		int tmp=sumN-maxN;
		// cout<<tmp<<" ";
		if(tmp<=0){
			ans+=(sumN*sumN);
			break;
		}
		else
			ans+=(maxN*maxN);
		sumN-=maxN;
		maxT--;
	}

	cout<<ans<<endl;
}

int main(){
	_stdio();
	int t;
	cin>>t;
	while(t--)
		sol();
}