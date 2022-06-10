#include <iostream>
using namespace std;

int kadane_algo(int a[],int n){
	int sum=0,maxsum_ans=a[0];
	for(int i=0;i<n;i++){
		sum+=a[i];
		if(sum>maxsum_ans)
			maxsum_ans=sum;
		if(sum<0)
			sum=0;
	}
	return maxsum_ans;
}

int main(){
	int a[]={-2,1,-3,4,-1,2,1,-5,4};
	cout<<kadane_algo(a,7)<<endl;
}