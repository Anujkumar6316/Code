#include <iostream>
using namespace std;

int sol(string str){
	int flag=0;
	for(int i=0;i<str.size();i++){
		for(int j=0;j<str.size();j++){
			if(i!=j){
				if(str[i]==str[j]){
					flag=1;
					break;
				}
			}
		}
		if(flag==0){
			return i;
		}
		flag=0;
	}
	return -1;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif

	string str;
	cin>>str;
	cout<<sol(str)<<endl;
	
}