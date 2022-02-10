#include <iostream>
#include <array>
#include <algorithm> //sort(pos 1st, pos last+1)
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

void arr_display(int arr[],int s){
	for(int i=0;i<s;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

void replacing_arr_ele(int arr[],int pos,int ele){
	arr[pos]=ele;
}

void update_stl_arr(array<int,5> &arr_stl,int pos,int ele){
	arr_stl[pos]=ele;
}
void display_stl_arr(const array<int,5> xarr ){
	for(int i=0;i<xarr.size();i++)
		cout<<xarr[i]<<" ";
	cout<<endl;
}

int main(){
	_stdio();
	cout<<"**Classical Array**"<<endl;
	int arr[]={200,104,60,800,10};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<"Size of arr: "<<size<<endl;

	cout<<"Elements of an arr before replacement: ";
	arr_display(arr,size);


	//this happens bcoz arr passes the address rather than copy..
	replacing_arr_ele(arr,0,3);
	cout<<"Elements of an arr after replacement: ";
	arr_display(arr,size);
	sort(arr,arr+size);
	cout<<"Elements after sorting: ";
	// another way to display arr..
	for(auto i: arr)
		cout<<i<<" ";
	cout<<endl;

	cout<<"\n**Array STL**"<<endl;
	array<int,5> arr_stl={1,300,15,7,90};

	update_stl_arr(arr_stl,0,10); 
	// ele didn't replaced bcoz in arr is object of array stl it pass the value rather than address. 
	// but to make changes in stl --> arr_stl= &arr_stl.(pass by refrence).
	// const array<int,5> arr ---> with this we only give read only persion which we can't make any changes with arr. it will show error if we try to do.

	sort(arr_stl.begin(),arr_stl.end());
	cout<<"updated arr_stl(sort & ele replacement): ";
	display_stl_arr(arr_stl);
}