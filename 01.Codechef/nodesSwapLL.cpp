#include <iostream>
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

template <typename T>
class node{
public:
	T val;
	node<T> *next;
	node(T d):val(d),next(NULL){}
};

template <typename T>
class list{
	node<T>* head;
	node<T>* tail;
public:
	list(){
		head=NULL;
		tail=NULL;
	}

	void insertion(T d){
		node<T>* p;
		p=new node<T>(d);
		if(head==NULL){
			head=p;
			tail=p;
		}
		else{
			tail->next=p;
			tail=p;
		}
	}

	void display(){
		node<T>* p=head;
		while(p){
			cout<<p->val<<" ";
			p=p->next;
		}
		cout<<endl;
	}

	node<T>* swapNode(){
		if(head==NULL || head->next==NULL)
			return head;

		node<T> *p=head;
		node<T> *new_start=p->next;
		node<T> *q;
		while(true){
			q=p->next;
			node<T> *tmp=q->next;

			q->next=p;

			if(tmp==NULL || tmp->next==NULL){
				p->next=tmp;
				break;
			}
			p->next=tmp->next;

			p=tmp;
		}
		return new_start;
	}

};




int main(){
	_stdio();
	list<int> l;
	int n; 
	n=15;
	// cin>>n;
	for(int i=0;i<n;i++){
		l.insertion(i+1);
	}
	l.display();
	node<int> *x=l.swapNode();
	while(x){
		cout<<x->val<<" ";
		x=x->next;
	}
}