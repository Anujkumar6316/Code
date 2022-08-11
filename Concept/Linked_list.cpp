#include<iostream>
#include "List.h"
using namespace std;

	void _stdio(){
		#ifndef ONLINE_JUDGE
		freopen("/home/anuj/input.txt","r",stdin);
		freopen("/home/anuj/output.txt","w",stdout);
		#endif
	}

int main(){
	_stdio();
	// LIST..
	int n; cin>>n;
	List l1;
	for(int i=0;i<n;i++) {
		int a;
		cin>>a;
		l1.push_back(a);
	}
	l1.insert(5,4);
	l1.display();
	cout<<"Element present or absent: "<<l1.find(5)<<endl;
	// cout<<"recursive_search: "<<recursive_search(l1,5)<<endl;

	l1.pop_front();
	l1.display();

	l1.pop_back();
	l1.display();


	l1.erase(5);
	l1.display();
	
	l1.reverseList();
	l1.display();

	l1.push_back(100);
	l1.display();
}