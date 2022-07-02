#include<iostream>
#include <vector>
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
    freopen("/home/anuj/input.txt","r",stdin);
    freopen("/home/anuj/output.txt","w",stdout);
    #endif
}

void displayArr(int a[],int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

void mergeSort(int a[],int l,int mid,int h){
	int i=l,j=mid+1,k=l,s=(h-l)+1;
	int b[100];
	while(i<=mid && j<=h){
		if(a[i]<a[j])
			b[k++]=a[i++];
		else
			b[k++]=a[j++];
	}
	for(;i<=mid;i++)
		b[k++]=a[i];
	for(;j<=h;j++)
		b[k++]=a[j];

	for(int x=l;x<=h;x++)
		a[x]=b[x];
	// displayArr(a,h+1);
}

void recursiveMergeSort(int a[],int l,int h){
	if(l<h){
		int mid=(l+h)/2;
		recursiveMergeSort(a,l,mid);
		recursiveMergeSort(a,mid+1,h);
		mergeSort(a,l,mid,h);
	}
}

int main(){
	_stdio();
	int arr[]={2,4,6,8,1,3,5,7};
	mergeSort(arr,0,3,7);
	int a[]={2,42,5,2,45,2,5,21,4,45,678,87,64,32};
	recursiveMergeSort(a,0,13);
	displayArr(a,14);
}