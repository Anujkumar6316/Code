#include <iostream>
using namespace std;

void _init_(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

//basic --> O(n)
int isprime(int n){
	if(n<=1)
		return 0;
	for(int i=2;i<n;i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}

//advance --> O(sqrt(n))
int isprime2(int n){
	if(n==1) return 0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}

//sieve of eratosthenes..
void PrimeEratosthenes(int n){
	int arr[n+1]={0};
	for(int i=2;i*i<=n;i++){
		if(!arr[i]){
			for(int j=i*i;j<=n;j+=i){
				arr[j]=1;
			}
		}
	}
	for(int i=2;i<=n;i++){
		if(!arr[i])
			cout<<i<<" ";
	}
	cout<<endl;
}

int main(){
	_init_();
	cout<<isprime(12)<<endl;
	isprime2(2)? cout<<"Prime no.\n":cout<<"Not prime no.\n";
	PrimeEratosthenes(50);
}