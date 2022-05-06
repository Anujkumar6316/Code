#include<iostream>
#include"LL_header.h"
using namespace std;

void _init_(){
    #ifndef ONLINE_JUDGE
    freopen("/home/anuj/input.txt","r",stdin);
    freopen("/home/anuj/output.txt","w",stdout);
    #endif
}

void display_arr(int a[],int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

/*
min: O(n)
max: O(n^2)
flag makes it adaptive
stable bcoz it doesn't swap the equal num.
*/
void bubble_sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		int flag=0;
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
				flag=1;
			}
		}
		if(flag==0)
			break;
	}
}


void insertion_array_sort(int a[],int n,int x){
	int i;
	for(i=n-1;i>=0;i--){
		if(a[i]>x){
			a[i+1]=a[i];
		}
		else
			break;
	}
	a[i+1]=x;
}

void node::insertion_LL_sort(int ele){
	node *q=new node();
	node *p=new node();
	q=0;
	p=head;
	while(q){
		if((p->data)>ele){
			q=p;
			p=p->next;
		}
		else{
			node *z=new node();
			z->data=ele;
			if(!q)
				q->next=z;
			else
				head=z;
			z->next=p;
			break;
		}
	}
}

void insertion_sort_array(int arr[],int n){
	for(int i=1;i<n;i++){
		int j=i-1;
		int x=arr[i];
		while(j>-1 && arr[j]>x){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=x;
	}
}

// 3. Selection sort

void selection_sort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int j=i;
		int k=i;
		for(k;k<n;k++){
			if(arr[k]<arr[j])
				j=k;
		}
		//swap
		int tmp=arr[j];
		arr[j]=arr[i];
		arr[i]=tmp;
	}
	display_arr(arr,n);
}

int main(){
	_init_();
	int a[6]={8,5,7,3,2};

	bubble_sort(a,5);
	display_arr(a,5);

	insertion_array_sort(a,5,4);
	display_arr(a,6);

	node l1;
	for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
		l1.insert_ele(a[i]);
	cout<<"LL: ";
	l1.display_LL(head);
	cout<<endl;
	l1.insertion_LL_sort(6);
	l1.display_LL(head);

	cout<<endl;
	int arr[]={3,5,2,562,21};
	insertion_sort_array(arr,5);
	display_arr(arr,5);
	int arr2[]={3,5,2,562,21};
	selection_sort(arr2,5);
}