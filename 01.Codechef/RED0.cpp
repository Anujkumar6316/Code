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

ll sol(){
	ll x,y;
	cin>>x>>y;
	ll a=max(x,y),b=min(x,y);

	if(a==b)
		return a;
	else if(a==0 || b==0)
		return -1;
	else if ((b-a)==1)
		return b-1+3;
	else if(a%b){
		if((a-(b-1))%2)
			return -1;
		else
			return log2(a-(b-1))+1;
	}
	else{
		if((a/b)%2)
			return -1;
		else{
			ll ans= log2((a/b)*2)+a-1;
			return ans;
		}
	}
	return -1;
}

bool isPowerOfTwo(ll n)
{
    return (ceil(log2(n)) == floor(log2(n)));
}

ll sol2(){
	ll x,y;
	cin>>x>>y;
	ll a=max(x,y),b=min(x,y);

	if(a==b)
		return a;
	else if(a==0 || b==0)
		return -1;
	else{
		if(!(a%b)){
			if((a/b)%2==0 && a!=1 && b!=1)
				return log2((a/b)*2)-1+a;
			else{
				if(isPowerOfTwo((a-b)+1)){
					return log2((a-b)+1)+a;
				}
			}
		}
		else{
			if(isPowerOfTwo((a-b)+1)){
				if(a==1 || b==1)
					return log2((a-b)+1)+a-b+1;
				else
					return log2((a-b)+1)+b-1+(a-b)+1;
			}
		}
	}
	return -1;
}


int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		cout<<sol2()<<endl;

}