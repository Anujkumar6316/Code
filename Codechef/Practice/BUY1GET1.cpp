// done

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

// 1st apporoach
void sol(){
	string str;
	cin>>str;
	unordered_map<char,int> m;
	for(int i=0;i<str.size();i++){
		m[str[i]]++;
	}
	int ans=0;
	for(auto i:m){
		ans=ans+i.second/2;
		if(i.second%2)
			ans++;
	}
	cout<<ans<<endl;
}

// 2nd apporoach
class x{
public:
	char ch;
	int count;
}
void sol2(){
	string str;
	cin>>str;
	vector<int> v;
	v.push_back(1);
	char a=str[0],b;
	for(int i=1;i<str.size();i++){
		b=str[i];
		if(a==b){
			v[v.size()-1]++;
		}
		else{
			a=str[i];
			v.push_back(1);
		}
	}
	int ans=0;
	for(auto i:v){
		ans=ans+i/2;
		if(i%2)
			ans++;
	}
	if(str.size()==1)
		cout<<1<<endl;
	else
		cout<<ans<<endl;
}


int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol2();

}