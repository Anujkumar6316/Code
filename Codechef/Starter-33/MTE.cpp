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

//wrong ans..
void sol(){
	int n,a,odd=0,even=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a%2)
			odd++;
		else
			even++;
	}
	int ans=0;
	if(!even || !odd)
		ans=0;
	else{
		if(odd<=even){
			ans=odd/2;
			if(odd%2)
				ans+=even;
		}
		else if(odd/2<even && odd%2==0){
			ans=odd/2;
		}
		else
			ans=even;
	}
	cout<<ans<<endl;
}

//rigth code
void sol2(){
	int n,odd=0,even=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		if(a&1)
			odd++;
		else
			even++;
	}
	if(odd%2==0)
		cout<<min(odd/2,even)<<endl;
	else
		cout<<even<<endl;
}

void sol3(){
	int n;
        cin>>n;
        int odd=0,even=0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            if(temp&1){
                odd++;
            }
            else{
                even++;
            }
        }
        if(odd%2==0){
            cout<<min(odd/2,even)<<endl;
        }
        else{
            cout<<even<<endl;
        }
}
int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol2();
}