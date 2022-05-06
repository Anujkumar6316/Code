#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

void sol(){
	long long int n;
	cin>>n;
	string str;
	cin>>str;
	vector<int> odd,even;
	for(int i=0;i<n;i++){
		even.push_back((int)str[i]-48);
		i++;
	}
	for(int j=1;j<n;j++){
		odd.push_back((int)str[j]-48);
		j++;
	}

	sort(even.begin(),even.end());
	sort(odd.begin(),odd.end());


	int i=0,ans=0;
	int arr[n];
	for(int j: even){
		arr[i]=j;
		i+=2;
	}
	i=1;
	for(int j: odd){
		arr[i]=j;
		i+=2;
	}
	for(int i=0;i<n;i++){
		// cout<<arr[i]<<" ";
		if(arr[i]==0 && arr[i+1]==1)
			ans++;
	}
	cout<<"-->"<<ans<<endl;
	cout<<ans<<endl;
}

void second_attempt(){
	int n;
	cin>>n;
	string str;
	cin>>str;
	string odd="",even="";

	for(int i=0;i<n;i++){
		if(i%2)
			even+=str[i];
		else
			odd+=str[i];
	}
	cout<<even<<" "<<odd<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		second_attempt();
}