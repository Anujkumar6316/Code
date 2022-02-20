#include <iostream>
#include <string>
#include <vector>
using namespace std;

class stack{
public:
	int top;
	int size;
	char *ch;
	int pre;
};

void push_st(stack *st,char ch){
	if(st->top==st->size)
		cout<<"Stack is full"<<endl;
	else{
		st->top++;
		st->ch[st->top]=ch;
	}
}

char pop_st(stack *st){
	char ele;
	if(st->top==-1)
		cout<<"Stack is empty"<<endl;
	else{
		st->top--;
		ele= st->ch[st->top+1];
	}
	return ele;
}

void display_st(stack st){
	while(st.top>=0){
		cout<<st.ch[st.top]<<" ";
		st.top--;
	}
	cout<<endl;
}

char top_st(stack st){
	if(st.top>=0)
		return st.ch[st.top];
	return '0';
}


// //Pactice from video lecture-->

int isOpearand(char ch){
	if(int(ch)>=65 && int(ch)<=90 || int(ch)>=97 && int(ch)<=122)
		return 1;
	return 0;
}

// int pre(char ch){
// 	if(ch=='+'||ch=='-')
// 		return 1;
// 	else if(ch=='*'||ch=='/')
// 		return 2;
// 	return 0;
// }

// void converter(string str){
// 	stack st;
// 	vector<char> postfix;
// 	st.top=-1;
// 	st.size=str.size();
// 	st.ch=new char[st.size];
// 	int i=0;
// 	while(str[i]!='\0'){
// 		if(isOpearand(str[i])){
// 			postfix.push_back(str[i++]);
// 		}
// 		else{
// 			if(pre(str[i])>pre(top_st(st))){
// 				st.top++;
// 				st.ch[st.top]=str[i];
// 				i++;
// 			}
// 			else{
// 				postfix.push_back(st.ch[st.top]);
// 				st.top--;
// 			}
// 		}
// 	}
// 	// postfix.push_back('a');
// 	// postfix.push_back('b');
// 	for(int i=st.top;i>=0;i--){
// 		postfix.push_back(st.ch[i]);
// 	}
// 	for(auto i:postfix)
// 		cout<<i<<" ";
// 	cout<<endl;
// }

//student excercise--

int out_stack_pre(char ch){
	if(ch=='+'||ch=='-')
		return 1;
	else if(ch=='*'||ch=='/')
		return 3;
	else if(ch=='^')
		return 6;
	else if(ch=='(')
		return 7;
	else if(ch==')')
		return 0;
	return -1;
}

int in_stack_pre(char ch){
	if(ch=='+'||ch=='-')
		return 2;
	else if(ch=='*'||ch=='/')
		return 4;
	else if(ch=='^')
		return 5;
	else if(ch=='(')
		return 0;
	// else if(ch==')')
	// 	return 0;
	return -1;	
}

void converter(string str){
	stack st;
	st.top=-1;
	st.size=str.size();
	st.ch=new char[st.size];

	vector<char> postfix;

	int i=0;
	while(str[i]!='\0'){
		if(isOpearand(str[i])){

			postfix.push_back(str[i++]);
		}
		else{
			if(out_stack_pre(str[i])>in_stack_pre(top_st(st))){
				// cout<<"adding "<<str[i]<<" to the stack"<<endl;
				st.top++;
				st.ch[st.top]=str[i++];
			}
			else if(out_stack_pre(str[i])==0 && in_stack_pre(top_st(st))==0){
				// cout<<"out_stack_pre: "<<str[i]<<": "<<out_stack_pre(str[i])<<" in_stack_pre: "<<top_st(st)<<": "<<in_stack_pre(top_st(st))<<endl;
				st.top--;
				i++;
			}
			else{
				// cout<<"Adding "<<st.ch[st.top]<<" to postfix"<<endl;
				postfix.push_back(st.ch[st.top]);
				st.top--;
			}
		}
	}
	for(int i=st.top;i>=0;i--){
		postfix.push_back(st.ch[i]);
	}
	for(auto i:postfix)
		cout<<i<<" ";
	cout<<endl;
}

void evolution_postfix(string postfix){
	
}


int main(){
	#ifndef online_judge
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif

	// stack st;
	string str;
	// st.top=-1;
	// st.size=str.size();
	// st.ch=new char[st.size];
	// for(int i=0;i<str.size();i++){
	// 	push_st(&st,str[i]);
	// }
	// pop_st(&st);
	// display_st(st);
	int t;
	cin>>t;
	while(t--){
		cin>>str;		
		converter(str);
	}

}