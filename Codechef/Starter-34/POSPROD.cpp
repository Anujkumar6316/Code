// DONE

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

// TLE
void sol(){
	int n,ans=0;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	for (int i = 0; i < n-1; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			if(arr[i]*arr[j]>0)
				ans++;
		}
	}
	cout<<ans<<endl;
}

// DONE
void sol2(){
	ll int _n,ans=0;
	cin>>_n;
	ll int arr[_n];
	ll int p=0,n=0;
	for (ll int i = 0; i < _n; ++i)
	{
		cin>>arr[i];
		if(arr[i]>0) p++;
		else if(arr[i]<0) n++;
	}
	cout<<((p-1)*(p))/2+((n-1)*n)/2<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol2();
}