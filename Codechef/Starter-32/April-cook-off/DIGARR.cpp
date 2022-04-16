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

string sol(){
	int n;
	cin>>n;
	string str;
	cin>>str;
	for(int i=0;i<str.size();i++){
		if(str[i]=='5'||str[i]=='0')
			return "yes";
	}
	return "no";
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		cout<<sol()<<endl;
}