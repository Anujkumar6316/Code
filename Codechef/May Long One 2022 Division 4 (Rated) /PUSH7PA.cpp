// done

#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void _stdio(){
    #ifndef ONLINE_JUDGE
    freopen("/home/anuj/input.txt","r",stdin);
    freopen("/home/anuj/output.txt","w",stdout);
    #endif
}

vector<ll> findFrequency(vector<ll> vec)
{
    map<ll, ll> M;
 
    for (ll i = 0; vec[i]; i++) {
        if (M.find(vec[i]) == M.end()) {
            M[vec[i]] = 1;
        }
        else {
            M[vec[i]]++;
        }
    }
 
    vector<ll> ans;
    for (auto& it : M) {
             ans.push_back(it.first+(it.second-1));
    }
    return ans;
}

void sol(){
    ll n,a;
    cin>>n;
    vector<ll> v;
    for(ll i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    // cout<<prllFrequency(v)<<endl;
    if(v.size()>1){
        vector<ll> ans=findFrequency(v);
        sort(v.begin(),v.end());
        cout<<v[v.size()-1]<<endl;
    }
    else{
        cout<<v[0]<<endl;
    }
}

void sol2(){
    int n;
    cin>>n;
    map<int, int> m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m[x]++;
    }
    int ans=0;
    for(auto it:m)
        ans=max(ans,it.first+it.second-1);
    cout<<ans<<endl;
}

int main(){
    _stdio();
    ll t=1;
    cin>>t;
    while(t--)
        sol2();
}