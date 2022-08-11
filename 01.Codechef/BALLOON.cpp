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
	int n,ans=0;
    cin>>n;
    int count=7;
    vector<int> v;
    for(int i=0;i<n;i++){
    	int a;
    	cin>>a;
    	v.push_back(a);
    }
    for(int i=0;i<n;i++){
        int a=v[i];
        // cin>>a;
        if(a>=1 && a<=7){
        	cout<<count<<" ";
        	count--;
        }
        ans++;
        cout<<ans<<" "<<count<<endl;
        if(count==0)
        break;
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