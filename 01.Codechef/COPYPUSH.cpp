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

// wrong
void sol(){
	ll n;
    cin>>n;
    string str,ans;
    cin>>str;
    ans.push_back(str[0]);
    int flag=0;
    while(ans.size()<str.size()){
        if((ans+ans)==str.substr(0,2*ans.size())){
            flag=1;
            ans.append(ans);
            // cout<<ans<<" flag: "<<flag<<" -> ";
        }
        else if(flag==1){
            flag=0;
            ans.push_back(str[ans.size()]);
        }
        else
        break;
    }
	// cout<<ans<<" "<<str<<"--> ";
    if(ans==str)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

}

// editorial 
void sol2(){
	ll n;
	cin>>n;
	string str;
	cin>>str;
	int ans=1;
	while(n>0){
		if(n%2)
			n--; // removing last element from the str.
		else{
			int mid=(n/2)-1; //0 based indexing
			if(str.substr(0,mid+1)==str.substr(mid+1,n-mid-1))
				n/=2;
			else{
				ans=0;
				break;
			}
		}
	}
	if(ans)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}

int main(){
	_stdio();
	int t;
	cin>>t;
	while(t--)
		sol2();
}