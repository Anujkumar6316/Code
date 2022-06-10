#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void displayArr(int arr[],int n){
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

void bubbleSort(int arr[],int n){
	for(int times=0;times<n-1;times++){
		for(int j=0;j<n-times-1;j++){
			if(arr[j]>arr[j+1])
				swap(arr[j],arr[j+1]);
		}
	}
	displayArr(arr,n);
}

// not completed

void insertionSort(int arr[],int n){
	// for(int i=1;i<n;i++){
	// 	int tmp=arr[i];
	// 	for(int j=i-1;j>=0;j--){
	// 		if(arr[j]>arr[i])
	// 			arr[j+1]=arr[j];
	// 		else
	// 			arr[j]=tmp;
	// 	}
	// }
}

int main(){
	int arr[]={2,34,52,6,2,6,2,65,3,2};
	bubbleSort(arr,10);
}