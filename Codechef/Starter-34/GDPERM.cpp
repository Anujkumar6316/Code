// done

// permutation: no of possible arrangements in a set when order is matter.
//				occurance of a number should be unique.(means no repetation)
// nPr = n!/(n-r)!


#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long int
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

void display(int a[],int n){
	int xo=0;
	for(int i=0;i<n;i++){
		xo^=abs(a[i]-(i+1));
	}
	if(xo==0){
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
}

void permutation(){
	int a[]={1,2,3,4,5};
	int n=5;
	do{
		int flag=0;
		for(int i=0;i<5;i++){
			if(a[i]==i+1){
				flag=1;
				break;
			}
		}
		if(flag==0) display(a,n);
	}while(next_permutation(a,a+n));
}

void sol(){
	int n;
	cin>>n;
	int a[n];
	// for(int i=0;i<n;i++) a[i]=i+1;
	if(n%2==0){
		for(int i=1;i<=n;i+=2)
			cout<<i+1<<" "<<i<<" ";
		cout<<endl;
	}
	else if(n<5)
		cout<<-1<<endl;
	else{
		cout<<2<<" "<<3<<" "<<5<<" "<<1<<" "<<4<<" ";
		for(int i=6;i<=n;i+=2)
			cout<<i+1<<" "<<i<<" ";
		cout<<endl;
	}
}

int main(){
	_stdio();
	permutation();
	cout<<endl;
	cout<<"All the permutation of 1,2,3: "<<endl;
	int a[]={1,2,3};
	// cout<<next_permutation(a,a+3)<<endl;
	do{
		for(int i=0;i<3;i++) cout<<a[i]<<" ";
			cout<<endl;
	}while(next_permutation(a,a+3));
	// here next_permutaion is creating other possible permutation until it repeats it self.
	

	cout<<"end"<<endl;
	int t=1;
	cin>>t;
	while(t--)
		sol();
}