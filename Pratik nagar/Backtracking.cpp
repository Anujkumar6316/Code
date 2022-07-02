#include<iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
    freopen("/home/anuj/input.txt","r",stdin);
    freopen("/home/anuj/output.txt","w",stdout);
    #endif
}

// find the subset of a string ..
// eg: abc--> a,b,c,ab,ac,bc,abc

// now follow up sort the subset in laxicornogogical order..

void subSetOfString(char* input,char* output,int i,int j,vector<string> &v){
	// base case..
	if(input[i]=='\0'){
		output[j]='\0';
		string temp(output);
		v.push_back(temp);
		return;
	}

	//recursive code.. 
	/*
	abc --> divide in 2 part 
	1. including a.
	2. without a.
	*/
	output[j]=input[i];
	//including input char.
	subSetOfString(input,output,i+1,j+1,v);

	//excluding input char..
	subSetOfString(input,output,i+1,j,v);

}

bool compare(string s,string s1){
	if(s.size()==s1.size())
		return s<s1;
	return s.size()<s1.size();
}


// find all the permutation of a string...
void strPermutation(string str){
	cout<<str<<endl;
	do{
		cout<<str<<endl;
	}while(next_permutation(str.begin(),str.end()));
}

void BTpermutation(string str,int i,int j){
	if(str[i]=='\0'){
		i++;
		cout<<str<<endl;
		return;
	}
	swap(str[i],str[i+(j%3)]);
	BTpermutation(str,i,j++);
}


int main(){
	_stdio();
	char input[100],output[100];
	cin>>input;
	vector<string> v;
	subSetOfString(input,output,0,0,v);
	sort(v.begin(),v.end(),compare);
	for(auto i:v)
		cout<<i<<",";

	// strPermutation(input);
	BTpermutation("xyz",0,0);
}