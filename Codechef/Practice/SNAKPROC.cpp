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

void sol(){
	int l;
	char a;
	cin>>l;
	vector<char> ch;
	for(int i=0;i<l;i++){
		cin>>a;
		if(a!='.')
			ch.push_back(a);
	}
	int flag=0;
	for(int i=0;i<ch.size();i++){
		if(ch[ch.size()-1]=='H' || ch[0]=='T'){
			flag=1;
			cout<<"Invalid"<<endl;
			break;
		}
		else if(ch[i]==ch[i+1]){
			flag=1;
			cout<<"Invalid"<<endl;
			break;
		}
	}
	if(flag==0)
		cout<<"Valid"<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}