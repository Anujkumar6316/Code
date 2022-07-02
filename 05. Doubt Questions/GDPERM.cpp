// https://www.codechef.com/START34D/problems/GDPERM

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

int check_xor(vector<int> v){
	int x=0;
	for(int i=0;i<v.size();i++){
		x=x^abs(v[i]-(i+1));
	}
	return x;
}

void sol(){
	int n;
	cin>>n;
	// vector<int> v;

	/*
	this helped me to find the permutation vector whose xor
	is 0 according to question's conditions.
	for 5: 
		2 3 5 1 4.
	*/
	// for(int i=0;i<n;i++){
	// 	v.push_back(i+1);
	// }
	// do{
	// 	int flag=0;
	// 	for(int i=0;i<v.size();i++){
	// 		if(v[i]==i+1){
	// 			flag=1;
	// 			break;
	// 		}
	// 	}
	// 	if(flag==0){
	// 		int x=check_xor(v);
	// 		if(x==0){
	// 			for(auto i:v)
	// 				cout<<i<<" ";
	// 			cout<<endl;
	// 		}
	// 	}
	// }while(next_permutation(v.begin(),v.end()));


	if(n==3 || n==1)
		cout<<-1;

	else if(n%2){
		cout<<"2 3 5 1 4 ";
		for(int i=6;i<=n;i+=2){
			cout<<i+1<<" ";
			cout<<i<<" ";
		}
	}
	else{
		for(int i=1;i<=n;i+=2){
			cout<<i+1<<" ";
			cout<<i<<" ";
		}
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