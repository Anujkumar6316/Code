#include <iostream>
#include <climits>
using namespace std;

void swap(int *a,int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}

void displayArr(int arr[],int size){
	for (int i = 0; i < size; ++i)
	{
		cout<<arr[i]<<" ";	
	}
	cout<<endl;
}

void selectionSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int imin=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[imin])
				imin=j;
		}
		swap(&arr[i],&arr[imin]);
	}
}

void bubbleSort(int arr[],int n){

	// this loop will iterate until all the max element at the right most side..
	for(int j=0;j<n-1;j++){
		int flag=0;
		// this loop will bring max element at the end.
		for(int i=0;i<n-1-j;i++){
			if(arr[i]>arr[i+1]){
				swap(&arr[i],&arr[i+1]);
				flag=1;
			}
		}
		// flag is used to code adaptative means code won't run if array is already sorted
		if(flag==0)
			break;
	}
}

// Insertion sort..
void insertionSort(int arr[],int n){
	for(int i=1;i<n;i++){
		int val=arr[i],j=i-1;
		while(j>=0 && arr[j]>val){
				arr[j+1]=arr[j];
				j--;
		}
		arr[j+1]=val;
	}
}

// Merge sort(two list in a single array 
// 			  Note: both the list are sorted)..
void merge(int arr[],int l,int mid,int h){
	int i=l,j=mid+1,k=l;
	int arr1[h+1];
	while(i<=mid && j<=h){
		if(arr[i]>arr[j])
			arr1[k++]=arr[j++];
		else
			arr1[k++]=arr[i++];
	}
	for(;j<=h;j++)
		arr1[k++]=arr[j];
	for(;i<=(l+h)/2;i++)
		arr1[k++]=arr[i];
	for(int i=l;i<=h;i++)
		arr[i]=arr1[i];
}


void mergesort(int arr[],int l,int h){
	if(l<h){
		int mid=(l+h)/2;
		mergesort(arr,l,mid);
		mergesort(arr,mid+1,h);
		merge(arr,l,mid,h);
	}
}


// Quick sort
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

void quicksort(int a[],int l,int h){
	int j;
	if(l<h){
		j=partition(a,l,h);
		quicksort(a,l,j);
		quicksort(a,j+1,h);
	}
}

int main(){
	int arr[]={3,26,2,6,2,1,6,2,1,1};
	selectionSort(arr,sizeof(arr)/sizeof(arr[0]));
	displayArr(arr,10);
	int arr2[]={23,5,2,6,2,7,2,1,7,8,3};
	bubbleSort(arr2,11);
	displayArr(arr2,11);
	int arr3[]={24,3,6,3,7,2,7,9,65,3};
	insertionSort(arr3,10);
	displayArr(arr3,10);
	int arr4[]={2,4,6,8,10,1,3,5,7,9};
	merge(arr4,0,4,9);
	displayArr(arr4,10);

	int arr5[]={24,3,6,3,7,2,7,9,65,3,1234,23,77,431,87};
	mergesort(arr5,0,14);
	displayArr(arr5,15);

	int arr6[]={23,62,7,2,7,2,47,3,1,7,3,3,INT_MAX};
	quicksort(arr6,0,12);
	displayArr(arr6,12);
}