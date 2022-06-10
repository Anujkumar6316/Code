// done

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

class Player{
public:
	string str;
	int score;
	// void Player(string str1,int s){
	// 	str=str1;
	// 	score=s;
	// }
};

int comparator(Player p1,Player p2){
	if(p1.score!=p2.score)
		return p1.score>p2.score;
	else
		return p1.str < p2.str;
}

int main(){
	_stdio();
	int n;
	cin>>n;
	Player p[n];
	for(int i=0;i<n;i++){
		cin>>p[i].str>>p[i].score;
	}
	// cout<<comparator(p[1],p[2]);
	sort(p,p+n,comparator);
	for(int i=0;i<n;i++){
		cout<<p[i].str<<" "<<p[i].score<<endl;
	}
}