// done

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
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n,greater<int> ());
	int ans=0;
	
	for(int i=0;i<n-1;i++){
		if((arr[i]-arr[i+1])<=k){
			// cout<<arr[i]<<" "<<arr[i+1]<<endl;
			ans++;
			i++;
		}
	}
	cout<<ans<<endl;
}

int main(){
	_stdio();
	int t=1;
	// cin>>t;
	while(t--)
		sol();

}