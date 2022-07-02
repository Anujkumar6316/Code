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
	ll n,x,a;
	cin>>n>>x;
	vector<ll> v;
	for(int i=0;i<n;i++){
		cin>>a;
		v.push_back(a);
	}
	int flag=0;
	vector<ll> v1=v;
	sort(v.begin(),v.end());
	if(v1==v){
		flag=1;
		cout<<"Yes"<<endl;
	}
	int flag_s=0;
	if(flag==0){
		do{
			flag_s=0;

			for(int i=0;i<n-1;i++){
				if((v1[i]>v1[i+1] )&& (v1[i]+v1[i+1])<=x){
					flag_s=1;
					swap(v1[i],v1[i+1]);
				}
				else if(v1[i]>v1[i+1] && (v1[i]+v1[i+1])>x){
					flag=0;
					break;
				}
			}
			// cout<<flag_s<<" ";
		}while(flag_s==1);

		// for(int i=0;i<n;i++){
		// 	if(v1[i]>v1[i+1] && (v1[i]+v1[i+1])>x){
		// 		flag=0;
		// 		break;
		// 	}
		// 	else if(v1[i]>v1[i+1] && (v1[i]+v1[i+1])<=x)
		// 		swap(v1[i],v1[i+1]);
		// }

		if(v1==v){
			flag=1;
			cout<<"Yes"<<endl;
		}
		else
			cout<<"No"<<endl;
	}
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}