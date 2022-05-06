#include <iostream>
#include <vector>
#define ll long long
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

void sol(){
	int n,m;
	cin>>n>>m;
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;

	int tmp=(x1+y1)%2;
	// cout<<tmp<<endl;
	// cout<<x2<<" "<<y2<<endl;
	if((x1+y1)%2==(x2+y2)%2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				// cout<<(i+j)<<endl;
				if((x2==i) && (y2==j)){
					cout<<"2 ";
				}
				else{
					if(tmp==(i+j)%2){
						cout<<"1 ";
					}
					else
						cout<<"3 ";
				}
			}
			cout<<endl;
		}
	}
		else{
			for(int i=1;i<=n;i++){
				for(int j=1;j<=m;j++){
					if(tmp==(i+j)%2)
						cout<<"1 ";
					else
						cout<<"2 ";
				}
				cout<<endl;
			}
		}
 	}


int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();
}