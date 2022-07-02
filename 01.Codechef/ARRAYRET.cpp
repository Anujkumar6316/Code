#include <iostream>
#include <vector>
#include <algorithm>
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
	ll n,sum=0;
    cin>>n;
    vector<ll> b;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        b.push_back(x);
        sum+=x;
    }
    ll ref=sum/(n+1);
    // cout<<ref<<"-->"<<endl; 
    for(int i=0;i<n;i++)
    cout<<b[i]-ref<<" ";
    cout<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}