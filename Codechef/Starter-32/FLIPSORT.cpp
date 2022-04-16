#include <iostream>
#include <vector>
#define ll long long
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

void sol(){
	int n;
	cin>>n;
	string str;
	cin>>str;
	vector<int> x,start;
	for(int i=0;i<n;i++){
		if(str[i]=='1'){
			x.push_back(n-i);
			start.push_back(i+1);
			for(int j=i;j<n;j++){
				if(str[j]=='0')
					str[j]='1';
				else
					str[j]='0';
			}
		}
	}
	cout<<x.size()<<endl;
	for(int i=0;i<x.size();i++)
		cout<<start[i]<<" "<<x[i]<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}