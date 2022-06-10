#include<iostream>
#include <vector> 
#include "vector.h"// creating own local header file.
#include <algorithm> 
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
    freopen("/home/anuj/input.txt","r",stdin);
    freopen("/home/anuj/output.txt","w",stdout);
    #endif
}

bool rank_sort(pair<string,vector<int>> v1,pair<string,vector<int>> v2){
	return (v1.second[v1.second.size()-1])>(v2.second[v2.second.size()-1]);
}

//calculate the rank of student..
void _rank(){
	// "anuj": {12,134,21};
	vector<pair<string,vector<int>>> student_marks;
	student_marks.push_back({"Anuj",{10,20,30}});
	student_marks.push_back({"Anuj1",{00,20,30}});
	student_marks.push_back({"Anuj2",{20,20,30}});
	student_marks.push_back({"Anuj3",{40,20,30}});

	// printing score of all students
	int total_marks=0;
	cout<<"NAME"<<" "<<"P C M"<<endl;
	for(int i=0;i<student_marks.size();i++){
		cout<<student_marks[i].first<<": ";
		for(auto i:student_marks[i].second){
			cout<<i<<" ";
			total_marks+=i;
		}
		student_marks[i].second.push_back(total_marks);
		cout<<endl;
	}

	sort(student_marks.begin(),student_marks.end(),rank_sort);
	cout<<"NAME"<<" "<<"P C M"<<endl;
	for(int i=0;i<student_marks.size();i++){
		cout<<student_marks[i].first<<": ";
		for(auto i:student_marks[i].second){
			cout<<i<<" ";
			total_marks+=i;
		}
		student_marks[i].second.push_back(total_marks);
		cout<<endl;
	}


}


int main(){
	_stdio();

	Vector<char> ch;
	ch.push_back('a');
	ch.push_back('b');
	ch.push_back('c');
	ch.push_back('d');
	for(int i=0;i<ch.size();i++)
		cout<<ch[i]<<" ";
	cout<<endl;

	Vector<int> v(7);
	v.push_back(11);
	v.push_back(12);
	v.push_back(14);
	v.push_back(15);
	v.push_back(16);
	v.push_back(17);
	v.pop_back();
	cout<<v.isEmpty()<<endl;
	cout<<v.front()<<endl;
	cout<<v.back()<<endl;
	cout<<v.at(2)<<endl;
	cout<<v[2]<<endl;

	cout<<v.size()<<" "<<v.capcity()<<endl;


	cout<<"Rank calculator"<<endl;
	_rank();
}