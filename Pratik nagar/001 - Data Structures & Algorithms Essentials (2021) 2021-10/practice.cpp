#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
    freopen("/home/anuj/input.txt","r",stdin);
    freopen("/home/anuj/output.txt","w",stdout);
    #endif
}


void tmp(){
	int i,j;
	j=10;
	i=(j++,j+100,999+j);
	cout<<j;
}

int main(){
	_stdio();
	tmp();
}