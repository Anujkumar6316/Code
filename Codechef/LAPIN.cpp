#include <iostream>
using namespace std;

void sol(){
	string str;
	cin>>str;
	// cout<<str<<endl;
	int arr[26]={0};
	for(int i=0;i<(str.size())/2;i++){
		if(str[i]>=65 && str[i]<=90){
			arr[str[i]-65]++;
		}
		else{
			arr[str[i]-97]++;
		}
	}
	if(str.size()%2==0){
		for(int i=(str.size())/2;i<str.size();i++){
			if(str[i]>=65 && str[i]<=90)
				arr[str[i]-65]--;
			else
				arr[str[i]-97]--;
		}
	}
	else{
		for(int i=(str.size())/2+1;i<str.size();i++){
			if(str[i]>=65 && str[i]<=90)
				arr[str[i]-65]--;
			else
				arr[str[i]-97]--;
		}
	}
	int flag=0;
	for(int i=0;i<26;i++){
		if(arr[i]>0){
				flag=1;
				break;
		}
	}
	if(flag==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}

int main(){

	// #ifndef ONLINE_JUDGE
	// freopen("/home/anuj/input.txt","r",stdin);
	// freopen("/home/anuj/output.txt","w",stdout);
	// #endif
	int t;
	cin>>t;
	while(t--)
		sol();
}