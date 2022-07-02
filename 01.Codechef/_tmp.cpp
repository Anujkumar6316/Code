#include <iostream>
using namespace std;

void increasingNum(int start,string str,int n){
	if(n==0){
		cout<<str<<" ";
		return;
	}
	for(int i=start;i<=9;i++){
		string tmp=str+to_string(i);
		increasingNum(i+1,tmp,n-1);
	}
}

int main(){
	int n=2;
		increasingNum(0,"", n);
}