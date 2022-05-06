#include <iostream>
using namespace std;

class node{
public:
	int data;
	node *next;
	void insert_ele(int n);
	void display_LL(node *q);
	void insertion_LL_sort(int ele);
}*head=0,*tail=0;

void node::insert_ele(int n){
	node *p=new node();
	if(head==0)
		tail=head=p;
	tail->next=p;
	p->data=n;
	p->next=0;
	tail=p;
}

void node::display_LL(node *q){
	q=new node();
	q=head;
	while(q){
		cout<<q->data<<" ";
		q=q->next;
	}
}