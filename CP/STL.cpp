#include <map>
#include <iostream>
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

/* map question:
Q1: Given n strings, print unique strings
in lexiographical order with their frequency.
n<=10^5
|s|<=100
*/
void Q1_sol(){
	int n;
	cin>>n;
	map<string, int> m;

	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		m[str]++;
	}

	for(auto i:m)
		cout<<i.first<<" "<<i.second<<endl;
}

void map_func(){
	map<int, string> m;

	//method-1 for insertion..
	m[5]="five"; // O(log(n))
	m[6]="six";
	m[1]="one";
	// method-2 using insert..
	m.insert({2,"two"}); // O(log(n))
	m.insert({3,"three"});
	m.insert({4,"four"});
	m.insert({7,"seven"});

	// this is a one method(iterative one) to display the pair in map:
	// map<int,string> :: iterator it;
	// for(it=m.begin();it!=m.end();++it){
	// 	cout<<it->first<<" "<<it->second<<endl;
	// }

	// here find takes a key value to search in map..
	auto it=m.find(3); // O(log(n)) 
		// if find doesn't find any thing it will return m.end which is a next value after the last pair means nothing. or garbage value.
	if(it!=m.end()){
		cout<<it->first<<" "<<it->second<<endl;
		m.erase(it);  // this will erase the pair in map it it's present. this func can take key or value as a parameter to which erase the pair
	}

	// clear func is to delete all the pair in the map.
	// m.clear();

	// method2 --> using auto
	for(auto pr:m)
		cout<<pr.first<<" "<<pr.second<<endl;
}

int main(){
	_stdio();
	map_func();
	Q1_sol();
}