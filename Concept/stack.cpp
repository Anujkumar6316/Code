#include <iostream>
#include "stackLL.h"

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

int main(){
	_stdio();
	int n;
	cin>>n;
	
	Stack<int> s;
	for(int i=1;i<=n;i++)
		s.push(i);

	cout<<s.empty()<<endl;
	cout<<s.top()<<endl;
	s.pop();
	// s.display();
	cout<<s.empty()<<endl;

	while (!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}

}