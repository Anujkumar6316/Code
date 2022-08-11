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

int partition(vector<int> &v,int l,int h){
	int pivot=l;
	int i=l,j=h;
	do{
		do{i++;}while(v[pivot]>v[i]);
		do{j--;}while(v[pivot]<v[j]);
		if(i<j)
			swap(v[i],v[j]);
	}while(i<j);
	swap(v[pivot],v[j]);

	return j;
}

void quickSort(vector<int> &v,int l,int h){
	if(l<h){
		int j=partition(v,l,h);
		quickSort(v,l,j);
		quickSort(v,j+1,h);
	}
}

int main(){
	// _stdio();
	vector<int> v={15,10,1,4,2,20,13};
	vector<int> v2=v;
	sort(v2.begin(),v2.end());
	// cout<<partition(v,0,6)<<endl;
	quickSort(v,0,7);
	for(auto i:v)
		cout<<i<<" ";
	cout<<endl;

	for(auto i:v2)
		cout<<i<<" ";
	cout<<endl;
}