// done

#include <iostream>
#include <vector>
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
	int n;
	cin>>n;
	int a[n][n];
	for(int row=0;row<n;row++){
		for(int col=0;col<n;col++)
			cin>>a[row][col];
	}

	vector<int> trace;
	int row=0,col=0;
	while(col<(n-1)){
		int r=row,c=col,sum1=0,sum2=0;
		while(c<n){
			sum1+=a[r][c];
			sum2+=a[c][r];
			r++;
			c++;
		}
		trace.push_back(sum1);
		trace.push_back(sum2);
		// row++;
		col++;
	}

	// row=1,col=0;
	// while(row<(n-1)){
	// 	int r=row,c=col,sum=0;
	// 	while(r<n){
	// 		sum+=a[r][c];
	// 		r++;
	// 		c++;
	// 	}
	// 	trace.push_back(sum);
	// 	row++;
	// }

	int ans=0;
	for(auto i:trace){
		// cout<<i<<" ";
		if(i>ans)
			ans=i;
	}

	if(ans<a[0][n-1])
		ans=a[0][n-1];
	if(ans<a[n-1][0])
		ans=a[n-1][0];
	cout<<ans<<endl;
}

int main(){
	_stdio();
	int t;
	cin>>t;
	while(t--)
		sol();
}