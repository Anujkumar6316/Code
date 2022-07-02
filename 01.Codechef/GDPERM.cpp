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

bool isgoodpermutation(int arr[],int n){
	int ans=0;
	for(int i=0;i<n;i++)
		ans=ans^arr[i];
	if(ans>0)
		return ans;
	return 1;
}

void sol(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	do{
		int ans=0;
		for(int i=0;i<n;i++)
			ans=ans^arr[i];
		if(ans==0){
			for(int i=0;i<n;i++)
				cout<<arr[i]<<" ";
			cout<<endl;
		}
		// else{
		// 	for(int i=0;i<n;i++)
		// 		cout<<arr[i]<<" ";
		// 	cout<<"-->"<<ans;
		// 	cout<<endl;
		// }
	}while(next_permutation(arr,arr+n));
	cout<<isgoodpermutation(arr,n)<<endl;
	cout<<(1^(2^3))<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}