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
	int n; 
    cin>>n; 
    vector<int> v(n,0); 
    for (int i=0;i<n;i++) { 
        cin>>v[i]; 
    }
    sort(v.begin(),v.end());

    int ans = 1, ptr = 1; 
    while (v.size()>0){ 
        auto i = v[ptr]; 
        if (i!=v.end()){ 
            v.erase(i); 
            ptr++; 
        } 
        else{ 
            ptr = 1; 
            ans++; 
        } 
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