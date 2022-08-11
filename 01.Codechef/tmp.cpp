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

int minJumps(int arr[], int n){
    // Your code here
    int i=0,ans=1;
    while(i<n){
        int max_i=i+1;
        // if(arr[i]>=(n-i))
        // 	break;
        int tmp=max_i;
        for(int k=0;k<=arr[tmp];k++){
            if(arr[max_i]<arr[i+k+1])
            max_i=k+1+i;
        	if((k+1+i)>n)
        		break;
        }
        cout<<arr[i]<<" ";
        i=max_i;
        ans++;
        if(arr[i]>=(n-i))
        	break;
    }
    return ans;
}

void sol(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	cout<<minJumps(arr,n);
}

int main(){
	_stdio();
	int t;
	cin>>t;
	while(t--)
		sol();
}