#include <iostream>
using namespace std;

void sol(){
	string str;
	int n,k;
	cin>>n>>k;
	cin>>str;
	int arr1[2]={0};
	int arr2[2]={0};
	for(int i=0;i<n/2;i++){
		if(str[i]==1)
			arr1[1]++;
		else
			arr1[0]++;
	}
	if(n%2==0){
		for(int i=n/2;i<n;i++){
			if(str[i]==1)
				arr2[1]++;
			else
				arr2[0]++;
		}
	}
	else{
		for(int i=0;i<n/2;i++){
			if(str[i]==1)
				arr2[1]++;
			else
				arr2[0]++;
		}		
	}

}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
	int t;
	//int t=0;
	cin>>t;
	while(t--)
		sol();

}