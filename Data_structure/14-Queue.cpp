#include <iostream>
using namespace std;


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

int main(){
	queue q(5);
	q.enqueue(5);
	q.enqueue(15);
	q.enqueue(25);
	q.enqueue(35);
	q.display_quene();
	q.dequeue();
	q.display_quene();
}