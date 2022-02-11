/*
	Classic array
	array stl
	vector stl
*/





#include <iostream>
#include <array>
#include <algorithm> //sort(pos 1st, pos last+1)
#include <vector>
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

void vector_display(vector<int> v){
	for(int i:v)
		cout<<i<<" ";
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



	//vector stl --> if vector's capacity is full then it doubles it's capacity during runtime.

	/*
	some imp method in vector
		[]
		at()
		back()
		begin()
		capacity()
		clear() --> delets the all elements of vector
		empty() --> same of clear
		end()
		erase()
		front()
		insert()
		pop_back() --> deletes the last element
		push_back() --> insert the ele at last pos
		reserve()
		resize()
		size() --> length of vector
	*/
	cout<<"\n**Vector stl**"<<endl;

	//range intialization..
	vector<int> v1(3,5);
	for(auto i:v1)
		cout<<i<<" ";
	cout<<endl;

	//copying vector..
	vector<int> v2(v1);
	vector_display(v2);

	//list
	int l[]={2,3,4,3,2};
	vector<int> v3(l,l+5);
	vector_display(v3);

	//classical way.
	vector<int> v4={1,2,3,4,5};
	vector_display(v4);

	cout<<"Size of v1: "<<v1.size()<<endl;
	cout<<"v2[0]: "<<v2.at(0)<<endl;
	cout<<"capacity of v3: "<<v3.capacity()<<endl; 	
	cout<<"Max of v4: "<<v4.max_size()<<endl;


	// deque --> it is double-ended queue in which we can push or pop the element from both sides.
	/*
		--> it is not neccesery that element will store in continous manner bcoz it used pointer.
	* some imp method:--
		[]
		at()
		back()
		begin()
		capacity()
		clear() --> delets the all elements of deque
		empty() --> same of clear
		end()
		erase()
		front()
		insert()
		pop_back() --> deletes the last element
		pop_front() --> deletes the front element
		push_back() --> insert the ele at last pos
		push_front() --> insert the ele at front pos
		reserve()
		resize()
		size() --> length of vector
	*/

	cout<<"\n** deque stl**"<<endl;
	//create a "deque"
	deque<int> d1;
	deque<int> d2(4,45); //45,45,45,45
	deque<int> d3(d2.begin(),d2.end()); //iterating d2 and inserting in d3
	deque<int> d4(d3); //copying d3 in d4

	int d_a[]={1,2,3,4,5,6};
	int d_n=sizeof(d_a)/sizeof(d_a[0]);
	deque<int> d5(d_a,d_a+n);
}