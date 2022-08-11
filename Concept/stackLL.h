#include <iostream>
using namespace std;

template <typename T>
class Stack;

template <typename T>
class Node{
public:
	T data;
	Node<T> *next;

	Node(T d):data(d),next(NULL){}

};

template <typename T>
class Stack{
	Node<T> *head;
public:
	Stack(){
		head=NULL;
	}

	void push(T ele){
		Node<T> *p=new Node<T>(ele);
		p->next=head;
		head=p;	
	}

	void display(){
		Node<T> *p=head;
		while(p){
			cout<<p->data<<" ";
			p=p->next;
		}
		cout<<endl;
	}

	T top(){
		return head->data;
	}

	void pop(){
		Node<T> *nodetodelete=head;
		head=head->next;
		delete(nodetodelete);
	}

	bool empty(){
		return head==NULL;
	}
};