#include<iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
    freopen("/home/anuj/input.txt","r",stdin);
    freopen("/home/anuj/output.txt","w",stdout);
    #endif
}

void Permutation(string str,int index,vector<string> &ans){
	
	// base case..
	if(index>=str.size()){
		ans.push_back(str);
		return;
	}

	for(int j=index;j<str.size();j++){
		swap(str[index],str[j]);
		Permutation(str,index+1,ans);
		//backtracking
		swap(str[index],str[j]);
	}
}

int main(){
	_stdio();
	string str="abc";

	vector<string> ans;
	Permutation(str,0,ans);
	for(auto i:ans)
		cout<<i<<" ";
}