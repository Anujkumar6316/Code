#include <iostream>
using namespace std;

class node{
public:
	int data;
	node *next;
	void insert_ele(int n);
	void display_LL(node *q);
}*head=0,*tail=0;

void node::insert_ele(int n){
	// head=new node();
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

int main(){
	node l1;
	l1.insert_ele(5);
	l1.insert_ele(1);
	l1.insert_ele(4);
	l1.insert_ele(2);
	int a[]={2,3,42,5,2,5,6,4,7,3,7,3,6,7};
	for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
		l1.insert_ele(a[i]);
	l1.display_LL(head);

}