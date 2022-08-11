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

int sol(){
	int n,k; cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]>k)
			return -1;
	}
	int i=0,ans=0;
	while(i<n){
		ans++;
		int wt=0;
		while(wt<k && i<n)
			wt+=arr[i++];
		if(wt>k)
			i--;
		cout<<arr[i-1]<<" "<<endl;
		// cout<<wt<<" --> "<<endl;
	}
	return ans;


}

int main(){
	_stdio();
	int t;
	cin>>t;
	while(t--)
		cout<<sol()<<endl;
}