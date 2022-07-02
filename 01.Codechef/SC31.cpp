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
    int n;
    cin>>n;
    
    string s,ans="0000000000";
    // cout<<ans<<endl;
    for(int j=0;j<n;j++){
        cin>>s;
        for(int i=0;i<10;i++){
        if(s[i]==ans[i])
            ans[i]='0';
        else
            ans[i]='1';
        }
        // cout<<ans<<endl;
    }
    int count=0;
    for(int i=0;i<10;i++)
    if(ans[i]=='1')
    count++;
    cout<<count<<endl;
}

int main(){
    _stdio();
    int t=1;
    cin>>t;
    while(t--)
        sol();

}