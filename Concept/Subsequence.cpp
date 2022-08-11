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

void powerSet(vector<int> v,int index,vector<vector<int>> &ans,vector<int> output){
	// base condition
	if(index>=v.size()){
		ans.push_back(output);
		return;
	}

	//exclude
	powerSet(v,index+1,ans,output);

	//include
	int a=v[index];
	output.push_back(a);
	powerSet(v,index+1,ans,output);
}

int main(){
	_stdio();
	// cin>>str;
	vector<vector<int>> ans;
	vector<int> output;
	vector<int> v={1,2,3};
	powerSet(v,0,ans,output);
	for(auto i:ans){
		for(auto j:i){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}