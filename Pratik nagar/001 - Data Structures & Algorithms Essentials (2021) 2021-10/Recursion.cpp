#include<iostream>
#include <vector>
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
    freopen("/home/anuj/input.txt","r",stdin);
    freopen("/home/anuj/output.txt","w",stdout);
    #endif
}

int recursion(int n){
	if(n==0 || n==1)
		return 1;
	return n*recursion(n-1);
}

int fibonacciSeries(int n){
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	return fibonacciSeries(n-2)+fibonacciSeries(n-1);
}

void NincreasingOrder(int n){
	if(n==0){
		return;
	}
	NincreasingOrder(n-1);
	cout<<n<<" ";
}	

// 1,3,5,25,2 --3--> pos 1
int firstoccurence(int arr[],int n,int ele){
	if(arr[n-1]==ele)
		return n;
	if((n-1)<0)
		return -1;
	return firstoccurence(arr,n-1,ele);
}

int power(int a,int n){
	if(n==1)
		return a;
	return a*power(a,n-1);
}

int main(){
	_stdio();
	cout<<"5 factorial: "<<recursion(5)<<endl;
	cout<<"5 fibonacciSeries: "<<fibonacciSeries(6)<<endl;
	NincreasingOrder(5);
	int arr[]={2,4,25,64,3,6,53,2,6,3,2};
	cout<<"\n"<<firstoccurence(arr,11,20)<<endl;
	cout<<"4^3: "<<power(4,3)<<endl;
}