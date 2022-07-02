#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <string>
#define ll long long int
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

void sol(){
	int n,x;
    cin>>n>>x;
    string str(n,'a');
    int rev=n/2;
    if(n%2)
    rev++;
    if(x>rev)
    cout<<-1<<endl;
    else{
        for(int i=1;i<rev;i++){
            str[i]+=i;
            str[n-1-i]+=i;
        }
        cout<<str<<endl;
    }
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}