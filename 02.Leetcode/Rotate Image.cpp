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

void swap(int *a,int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}

void sol(){
	int n,a;
	cin>>n;
	vector<vector<int>> v;
	for(int i=0;i<n;i++){
		vector<int> tmp;
		for(int j=0;j<n;j++){
			cin>>a;
			tmp.push_back(a);
		}
		v.push_back(tmp);
		tmp.clear();
	}

	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			swap(&v[i][j],&v[j][i]);
		}
		reverse(v[i].begin(),v[i].end());
	}
	// swap(v[0][1],v[1][0]);

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout<<v[i][j]<<" ";
		cout<<endl;
	}
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}