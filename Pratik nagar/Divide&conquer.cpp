#include<iostream>
#include <vector>
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
    freopen("/home/anuj/input.txt","r",stdin);
    freopen("/home/anuj/output.txt","w",stdout);
    #endif
}

void displayArr(int arr[],int n){
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

void _merge(int arr[],int l,int mid,int h){
	int i=l,j=mid+1,k=l;
	int a[h+1];
	while(i<=mid && j<=h){
		if(arr[i]>arr[j])
			a[k++]=arr[j++];
		else
			a[k++]=arr[i++];
	}
	for(;i<=mid;i++)
		a[k++]=arr[i];
	for(;j<=h;j++)
		a[k++]=arr[j];

	for(int x=l;x<=h;x++)
		arr[x]=a[x];
}

void mergeSort(int arr[],int l,int h){
	if(l<h){
		int mid=(l+h)/2;
		mergeSort(arr,l,mid);
		mergeSort(arr,mid+1,h);
		_merge(arr,l,mid,h);
	}
}

// quicksort

int partition(vector<int> &v,int l,int h){
	// int i=l+1,pivot=v[l],j=h;
	int i=l,j=h,pivot=v[l];
	do{
		// while(v[i]<=pivot) i++;
		// while(v[j]>pivot) j--;
		do{i++;}while(v[i]<=pivot);
		do{j--;}while(v[j]>pivot);
		if(i<j){
			swap(v[j],v[i]);
			// break;
		}
	}while(i<j);

	swap(v[j],v[l]);
	return j;
}

void quickSort(vector<int> &v,int l,int h){
	int j;
	if(l<h){
		j=partition(v,l,h);
		quickSort(v,l,j);
		quickSort(v,j+1,h);
	}
}

int main(){
	_stdio();
	int d[]={2343,62,3,5,2,53,2,56,2,12,3};
	vector<int> v={3,62,2343,3,5,2,53,2,56,2,12,3};
	// v.push_back(10000);
	quickSort(v,0,12);
	for(auto i:v)
		cout<<i<<" ";
	cout<<endl;
	mergeSort(d,0,10);
	displayArr(d,11);

}