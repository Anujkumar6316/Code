#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

void sol(){
	int n;
	cin>>n;
	float ans=pow((0.143*n),n);

	cout<<round(ans)<<endl;
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