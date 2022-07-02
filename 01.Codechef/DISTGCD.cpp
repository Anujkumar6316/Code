// done

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void _stdio(){
	#ifndef ONLINE_JUDGE
	freopen("/home/anuj/input.txt","r",stdin);
	freopen("/home/anuj/output.txt","w",stdout);
	#endif
}

ll factorX(ll x){
	ll ans=0;
	for(int i=1;i<=x;i++)
		if(x%i==0)
			ans++;	
	return ans;
}

 
// vector<ll> factorX(ll n)
// {
// 	vector<ll> v;
//     while (n % 2 == 0)
//     {
//         v.push_back(2);
//         n = n/2;
//     }
 
//     for (int i = 3; i <= sqrt(n); i = i + 2)
//     {
//         while (n % i == 0)
//         {
//             v.push_back(i);
//             n = n/i;
//         }
//     }
 
//     if (n > 2)
//         v.push_back(n);
//     return v;
// }

ll factors(ll x) {
    // We will store all factors in `result`
    vector <ll> result;
    ll i = 1;
    // This will loop from 1 to int(sqrt(x))
    while(i*i <= x) {
        // Check if i divides x without leaving a remainder
        if(x % i == 0) {
            result.push_back(i);
            // Handle the case explained in the 4th
            if(x/i != i) {
                result.push_back(x/i);
            }
        }
        i++;
    }
    
    // Return the list of factors of x
    return result.size();
}
void sol(){
	ll a,b;
	cin>>a>>b;
	ll x=abs(a-b);
	cout<<factorX(x)<<endl;
}

int main(){
	_stdio();
	int t=1;
	cin>>t;
	while(t--)
		sol();

}