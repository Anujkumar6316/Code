#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

void sol(){
	int x1,y1,x2,y2;
	int flag=0;

	cin>>x1>>y1>>x2>>y2;
		vector<pair<int,int>> v1,v2;
		v1.push_back(make_pair(x1-1,y1-2));
		v1.push_back(make_pair(x1-1,y1+2));
		v1.push_back(make_pair(x1-2,y1-1));
		v1.push_back(make_pair(x1-2,y1+1));
		v1.push_back(make_pair(x1+1,y1-2));
		v1.push_back(make_pair(x1+1,y1+2));
		v1.push_back(make_pair(x1+2,y1-1));
		v1.push_back(make_pair(x1+2,y1+1));

		v2.push_back(make_pair(x2-1,y2-2));
		v2.push_back(make_pair(x2-1,y2+2));
		v2.push_back(make_pair(x2-2,y2-1));
		v2.push_back(make_pair(x2-2,y2+1));
		v2.push_back(make_pair(x2+1,y2-2));
		v2.push_back(make_pair(x2+1,y2+2));
		v2.push_back(make_pair(x2+2,y2-1));
		v2.push_back(make_pair(x2+2,y2+1));

		for(auto i:v1){
			for(auto j:v2){
				if(i.first==j.first && i.second==j.second && i.first>0 && j.second>0 && i.first<9 && i.second<9){
					flag=1;
				}
			}
		}
		
	if(flag==0)
		cout<<"No"<<endl;
	else
		cout<<"Yes"<<endl;

}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}