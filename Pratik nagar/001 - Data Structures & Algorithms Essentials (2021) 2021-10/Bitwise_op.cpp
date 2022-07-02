#include<iostream>
#include <vector>
# define ll long long int
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
    freopen("/home/anuj/input.txt","r",stdin);
    freopen("/home/anuj/output.txt","w",stdout);
    #endif
}

int getithbit(int n,int i){
	// 
	int mask= 1<<i;
	return (n&mask)>0?1:0;
}

void setithbit(int &n,int i){
	// set the ith bit to one.. using or
	int mask=1<<i;
	n=(n|mask);
}

int ClearLastIthBit(int n,int i){
	// eg: 010010110(01000) --i=5--> 010010110(00000)
	// concept: 010010110(01000) & 111111111(00000) --> 010010110(00000)
	int mask=~0<<i;
	return n&mask;
}

int ClearBitsInRange(int n,int i,int j){
	// concept for mask = a|b;
	// a=
	int mask=(~0<<(i+1)) | (1<<j)-1;
	return n&mask;
}

int ReplaceBits(int n,int m,int i,int j){
	//eg: n=10(10011)0 m=10101
	//i=5,j=1;
	// n(clearbitsinrange) & 11(m)1 --> ans
	ClearBitsInRange(n,i,j);
	int mask=m<<i;
	return n|mask;

}

bool CheckPowerOf2(int n){
	return !(n&(n-1));
}

int CountNumOfSets(int n){
	int cnt=0;
	// //O(logN)
	// while(n>0){
	// 	int lastBit=n&1;
	// 	if(lastBit){
	// 		cnt++;
	// 	}
	// 	n=n>>1;
	// }

	// more efficent method..
	while(n>0){
		n=n&(n-1);
		cnt++;
	}
	return cnt;
}

int FastExponential(int a,int n){
	int ans=1;
	while(n>0){
		int lastbit=n&1;
		if(lastbit){
			ans=ans*a;
		}
		a=a*a;
		n=n>>1;
	}
	return ans;
}

ll MakeItBinary(int n){
	int cnt=0;
	ll ans=0;
	while(n>0){
		int lastbit=n&1;
		if(lastbit)
			ans=ans+FastExponential(10,cnt);
		n=n>>1;
		cnt++;
	}
	return ans;
}

int main(){
	_stdio();
	cout<<getithbit(10,3)<<endl;
	int n=5;
	setithbit(n,1); // 5: 0101 --i=1--> 0111:7;
					// 5: 0101 --i=0--> 0101:5 same as before;
	cout<<n<<endl;
	cout<<ClearLastIthBit(47,3)<<endl;
	cout<<ClearBitsInRange(47,3,1)<<endl;
	cout<<ReplaceBits(146,21,5,1)<<endl;
	cout<<CheckPowerOf2(20)<<endl;
	// cout<<CheckPowerOf2(4)<<endl;
	// cout<<CheckPowerOf2(1024)<<endl;
	// cout<<CountNumOfSets(1024)<<endl;
	cout<<CountNumOfSets(9)<<endl;
	cout<<FastExponential(3,5)<<endl;
	cout<<MakeItBinary(10)<<endl;
}