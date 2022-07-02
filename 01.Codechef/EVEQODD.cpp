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

ll tmp(ll x){
    ll ans=0;
    while(x){
        ans++;
        x/=2;
    }
    return ans;
}

void sol(){
    int n,e=0,o=0;
    cin>>n;
    vector<int> v,O;
    for(int i=0;i<2*n;i++){
        int a;
        cin>>a;
        if(a%2){
            // o.push_back(a);
            o++;
        }
        else{
            O.push_back(a);
            e++;
        }
        v.push_back(a);
    }
    
    if(o==e)
    cout<<0<<endl;
    else if(o>e)
    cout<<o-n<<endl;
    else if(e>o){
        vector<ll> x;
        for(int k=0;k<O.size();k++){
            ll z=tmp(O[k]);
            x.push_back(z);
        }
        sort(x.begin(),x.end());
        ll ans=0;
        for(int i=0;i<e-n;i++){
            ans+=x[i];
        }
        cout<<ans<<endl;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	sol();
	return 0;
}
