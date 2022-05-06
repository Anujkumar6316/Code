#include <iostream>
using namespace std;

void _init_(){
    #ifndef ONLINE_JUDGE
    freopen("/home/anuj/input.txt","r",stdin);
    freopen("/home/anuj/output.txt","w",stdout);
    #endif
}

// swap function
void swap(int *a,int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}

// display array
void displayArr(int a[],int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

// Bubble sort
void bubbleSort(int a[],int n){
	for(int i=0;i<n-1;i++){
		int flag=0;
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				swap(&a[j],&a[j+1]);
				flag=1;
			}
		}
		if (!flag)
			break;
	}
	// displayArr(a,n);
}

// here i can pass arr by changing
/*
void --> int *
int _c[x+y] --> static _c[12] (any static size x+y is dynamic)
*/
// merging 2 list
void merge2list(int a[],int b[],int x,int y){
	int _c[x+y];
	int i,j,k;
	i=j=k=0;
	while(i<x && j<y){
		if(a[i]<a[j])
			_c[k++]=a[i++];
		else
			_c[k++]=b[j++];
	}
	for(;i<x;i++)
		_c[k++]=a[i];
	for(;j<y;j++)
		_c[k++]=b[j];
	// return _c;
	displayArr(_c,x+y);
}

// merging two list from a single array
// there is bug in this func --> it printing same arr which is passed in a parameter..
// 				there was no bug it was the problem with an array.
void merge(int a[],int l,int mid,int h){
	int c[h+1],k=l,i=l,j=mid+1;
	while(i<=mid && j<=h){
		if(a[i]<a[j])
			c[k++]=a[i++];
		else
			c[k++]=a[j++];
	}
	for(;i<=mid;i++)
		c[k++]=a[i];
	for(;j<=h;j++)
		c[k++]=a[j];
	// displayArr(c,h+1);
	for(int i=l;i<=h;i++)
		a[i]=c[i];
}

//iterative merge sort..
void iterativeMergeSort(int a[],int n){
	int p;
	for(p=2;p<=n;p=p*2){
		for(int i=0;i+p-1<n;i=i+p){
			int l=i;
			int h=i+p-1;
			int mid = (l+h)/2;
			merge(a,l,mid,h);
		}
	}
	if(p/2<n)
		merge(a,0,p/2,n-1);
	displayArr(a,8);
}

//recursive merge sort..
void Rmergesort(int a[],int l,int h){
	if(l<h){
		int mid=(l+h)/2;
		Rmergesort(a,l,mid);
		Rmergesort(a,mid+1,h);
		merge(a,l,mid,h);
	}
}

int main(){
	_init_();
	int a1[]={2,4,6,8,10};
	int a2[]={3,6,9,12,15,18,1};
	bubbleSort(a1,5);
	bubbleSort(a2,7);
	displayArr(a1,sizeof(a1)/sizeof(a1[0]));
	displayArr(a2,7);
	merge2list(a1,a2,5,7);
	// int *c=merge2list(a1,a2,5,7);
	int a3[]={1,4,6,3,5,7};
	merge(a3,0,2,5);
	displayArr(a3,6);
	int a4[]={8,3,7,4,9,2,6,5};
	iterativeMergeSort(a4,8);
	displayArr(a4,8);
	int a5[]={8,3,7,4,9,2,6,5};
	Rmergesort(a5,0,7);
	displayArr(a5,8);
}