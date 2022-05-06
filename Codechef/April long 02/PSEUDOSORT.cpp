// done

#include <iostream>
#include <vector>
#define ll long long int
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

string sol(){
	int n,a;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin>>a;
		v.push_back(a);
	}

	for(int i=0;i<n-1;i++){
		if(v[i]>v[i+1]){
			int tmp=v[i];
			v[i]=v[i+1];
			v[i+1]=tmp;
			break;
		}
	}
	for(int i=0;i<n-1;i++){
		if(v[i]>v[i+1])
			return "NO";
	}
	return "YES";
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		cout<<sol()<<endl;
}