#include <iostream>
using namespace std;

void sol(){
	int n,k,flag=1;
	cin>>n>>k;
	string str;
	cin>>str;
	for(int i=0;i<(str.size())/2;i++){
		if(str[i]!=str[str.size()-1-i]){
			// if(k<=0){
			// 	flag=0;
			// 	break;
			// }
			k--;
		}
	}
	if(k>=0){
		cout<<"YES"<<endl;
	}
	else
		cout<<"NO"<<endl;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
	int t;
	//int t=1;
	cin>>t;
	while(t--)
		sol();

}