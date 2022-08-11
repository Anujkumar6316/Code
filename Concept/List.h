using namespace std;
class List;

class Node{
	int data;
	Node *next;
public:
	Node(int d):data(d),next(NULL){}

	friend class List;

	//distructor..
	~Node(){
		if(next!=NULL)
			delete next;
	}
};

class List{
	Node *head;
	Node *tail;
public:
	List():head(NULL),tail(NULL){}

	void push_front(int d){
		Node *p=new Node(d);
		if(head==NULL){
			head=tail=p;
		}
		else{
			p->next=head;
			head=p;
		}
	}

	void push_back(int d){
		Node *p=new Node(d);
		if(head==NULL)
			head=tail=p;
		else{
			tail->next=p;
			tail=p;
		}
	}

	void display(){
		Node *p=head;
		while(p){
			cout<<p->data<<" ";
			p=p->next;
		}
		cout<<endl;
	}

	// 0 based indexing
	void insert(int d,int pos){
		Node *p=new Node(d);
		if(pos==0){
			push_front(d);
		}
		else{
			Node *q=head;
			for(int i=0;i<pos-1;i++){
				q=q->next;
				if(q==NULL){
					// push_back(d);
					break;
				}
			}
			if(q){
			p->next=q->next;
			q->next=p;
			}
			else
				push_back(d);
		}
	}

	bool find(int d){
		Node *p=head;
		while(p){
			if(p->data==d)
				return true;
			p=p->next;
		}
		return false;
	}

	void pop_front(){
		Node *p=head;
		head=head->next;
		p->next=NULL;
		delete p;
	}

	void pop_back(){
		Node *p=head;
		while(p->next!=tail)
			p=p->next;

		tail=p;
		p=p->next;
		tail->next=NULL;
		delete p;
	}

	// 0 based indexing
	void erase(int pos){
		Node *p=head;

		for(int i=0;i<pos-1;i++){
			// cout<<p->data<<" ";
			p=p->next;
		}
		// cout<<p->data<<endl;
		Node *q=p;
		p=p->next;
		q->next=p->next;
		p->next=NULL;
		delete p;

	}

	void reverseList(){
		Node *cur=head;
		Node *per=NULL;
		tail=cur;
		while(cur){
			Node *tmp=cur->next;
			cur->next=per;
			per=cur;
			cur=tmp;
		}
		head=per;

	}
	
	// distructor for list..
	~List(){
		if(head!=NULL)
			delete head;
	}
};