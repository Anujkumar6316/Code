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
	int n;
	cin>>n;
	int i=n/2,j=n/2+1;
	if(!(n%2)){
	while(i>=1 && j<=n){
		cout<<i<<" "<<j<<" ";
		i--;
		j++;
	}
	}
	else{
		i++;
		j--;
		while(i<=n && j>=1){
			cout<<i<<" "<<j<<" ";
			i++;
			j--;
		}
		cout<<i<<" ";
	}
	cout<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}