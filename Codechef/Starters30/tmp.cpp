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
	string str="100101";
	cout<<str<<endl;
	vector<int> odd,even;
	odd.push_back((int)str[0]-48);
	for(int i=0;i<str.size();i++){
		even.push_back((int)str[i]-48);
		i++;
	}
	for(int i:even)
		cout<<i<<" ";
	cout<<endl;
}

int main(){
	_stdio();
	int t=1;
	// cin>>t;
	while(t--)
		sol();
}