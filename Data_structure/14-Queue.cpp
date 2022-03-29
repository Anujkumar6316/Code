#include <iostream>
using namespace std;

void std_file(){
	#ifndef online_judge
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}


//** QUEUE USING ARRAY **

class queue{
private:
	int size;
	int front;
	int rear;
	int *arr;
public:
	queue(){
		front=-1;
		rear=-1;
		size=10;
		arr=new int[size];
	}
	queue(int s){
		front=-1;
		rear=-1;
		this->size=s;
		arr=new int[this->size];
	}
	void enqueue(int ele);
	int dequeue();
	void display_quene();
};

void queue::enqueue(int ele){
	if(rear==size-1)
		cout<<"Queue is full"<<endl;
	else{
		rear++;
		arr[rear]=ele;
	}
	// cout<<"rear: "<<rear<<" front: "<<front<<endl;
}

int queue::dequeue(){
	int x;
	// cout<<"front: "<<front<<" rear: "<<rear<<endl;
	if(front==rear)
		cout<<"Queue is empty"<<endl;
	else{
		x=arr[front+1];
		arr[front++]=0;
	}
	return x;
}

void queue::display_quene(){
	int x=front;
	while(x!=rear){
		cout<<arr[x+1]<<" ";
		x++;
	}
	cout<<endl;
}

//** CIRCULAR QUEUE **

class circular_queue{
	int size;
	int front;
	int rear;
	int *arr;
public:
	circular_queue(){
		size=10;
		front=0;
		rear=0;
		arr=new int[size];
	}
	circular_queue(int s){
		size=s;
		front=0;
		rear=0;
		arr=new int[size];
	}
	void enqueue(int ele);
	int dequeue();
	void display_quene();
};

void circular_queue::enqueue(int ele){
	if(rear==0){
		rear=(rear+1)%size;
		arr[rear]=ele;
	}
	else if((rear+1)%size!=front){
		rear=(rear+1)%size;
		arr[rear]=ele;
	}
	else
		cout<<"Circular queue is full"<<endl;
}

int circular_queue::dequeue(){
	int x=-1;
	if(front==rear)
		cout<<"Circular queue is empty"<<endl;
	else{
		front=(front+1)%6;
		x=arr[front];
	}
	return x;
}

void circular_queue::display_quene(){
	int x=front;
	while(x!=rear){
		x=(x+1)%size;
		cout<<arr[x]<<" ";
	}
	cout<<endl;
}

// ** QUEUE USING LINKED LIST **

class node{
public:
	int data;
	node *next;
	// void enqueue(int ele); //this is also a right way to do it.
	// int dequeue();
	// void display_quene();
}*front=NULL,*rear=NULL,*front_deq=0,*rear_deq=0;

void enqueue(int ele){
	node *p=new node();

	if(p==0)
		cout<<"Queue is full"<<endl;
	else{
		p->data=ele;
		p->next=0;
		if(front==0){
			front=p;
			rear=p;
		}
		else{
			rear->next=p;
			rear=p;
		}
	}
}

int dequeue(){
	int x;
	if(front==0)
		cout<<"LL Queue is empty"<<endl;
	else{
		x=front->data;
		front=front->next;
	}
	return x;
}

void display_quene(){
	node *p=front;
	while(p){
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<endl;
}

// ** DEqueue ** --> doubly ended queue

void front_enqueue(int ele){
	node *p=new node();
	if(p==0)
		cout<<"DEqueue is full"<<endl;
	else{
		p->data=ele;
		p->next=front_deq;
		if(front_deq==0){
			front_deq=p;
			rear_deq=p;
		}
		else
			front_deq=p;
	}
}
void rear_enqueue(int ele){
	node *p=new node();
	if(p==0)
		cout<<"DEqueue is full"<<endl;
	else{
		p->data=ele;
		p->next=0;
		if(front_deq==0){
			front_deq=p;
			rear_deq=p;
		}
		else{
			rear_deq->next=p;
			rear_deq=p;
		}
	}
}

//landra 

int front_dequeue(){
	int x=-1;
	if(front_deq==0)
		cout<<"DEqueue is empty"<<endl;
	else{
		x=front_deq->data;
		front_deq=front_deq->next;
	}
	return x;
}

//this func has little of bug...
int rear_dequeue(){
	int x=-1;
	node *q=front_deq;
	node *p=0;
	while(q->next){
		p=q;
		q=q->next;
	}
	cout<<"rear_deq ele: "<<p->data<<endl;
	x=rear_deq->data;
	if(p){
		p->next=0;
		// front_deq=0;
	}
	rear_deq=p;
	return x;
}

void display_dequene(){
	cout<<"Last ele: "<<rear_deq->data<<endl;
	node *p=front_deq;
	if(p==0)
		cout<<"DEqueue is empty"<<endl;
	while(p){
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<endl;
}

// ** priority queues **

// 1. limited set of priorities
class lsop_queue{
	int data;
	int rear;
	int size;
	int *arr;
	lsop_queue(size){
		rear=-1;
		this->size=size;
		arr=new int[size];
	}
}



int main(){
	std_file();
	queue q(5);
	q.enqueue(5);
	q.enqueue(15);
	q.enqueue(25);
	q.enqueue(35);
	q.display_quene();
	q.dequeue();
	q.display_quene();

	circular_queue q2(5);
	q2.enqueue(2);
	q2.enqueue(4);
	q2.enqueue(6);
	q2.enqueue(8);
	q2.enqueue(10);
	cout<<q2.dequeue()<<endl;
	cout<<q2.dequeue()<<endl;
	cout<<q2.dequeue()<<endl;
	cout<<q2.dequeue()<<endl;
	cout<<q2.dequeue()<<endl;

	q2.display_quene();

	// node q3;
	// q3.enqueue(5);
	// q3.enqueue(10);
	// q3.display_quene();
	enqueue(5);
	enqueue(10);
	enqueue(15);
	display_quene();
	cout<<dequeue()<<endl;
	display_quene();
	cout<<"** DEqueue **"<<endl;
	rear_enqueue(10);
	rear_enqueue(20);
	display_dequene();
	front_enqueue(30);
	front_enqueue(40);
	display_dequene();

	front_dequeue();
	rear_dequeue();
	rear_dequeue();
	// rear_dequeue();
	front_dequeue();
	display_dequene();
}