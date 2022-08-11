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

// n!
void Permutation(string str,int i){
	if(i>=str.size()){
		cout<<str<<" ";
		return;
	}
	for(int j=i;j<str.size();j++){
		swap(str[i],str[j]);
		Permutation(str,i+1);
		swap(str[i],str[j]);
	}
}

int main(){
	_stdio();
	string str="aaaa";
	Permutation(str,0);
}