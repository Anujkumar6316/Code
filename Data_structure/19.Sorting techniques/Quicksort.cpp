#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

void _init_(){
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

int partition(int a[],int l,int h){
	int pivot=a[l];
	int i=l,j=h;
	do{
		do{i++;}while(a[i]<=pivot);
		do{j--;}while(a[j]>pivot);
		if(i<j)
			swap(&a[i],&a[j]);
	}while(i<j);
	swap(&a[l],&a[j]);
	return j;
}

void quickSort(int a[],int l,int h){
	int j;
	if(l<h){
		j=partition(a,l,h);
		quickSort(a,l,j);
		quickSort(a,j+1,h);
	}
}

int main(){
	_init_();
	int a[]={2,35,2,7,2,7,1,1676,2,4,INT_MAX},n=11;
	quickSort(a,0,n-1);
	for(int i=0;i<n-1;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}