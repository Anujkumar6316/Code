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

int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

std::vector<long long> sol(){
    long long a,b;
    cin>>a>>b;
    if(a%2==0){
        if(b-a>=2)
            return {a,a+2};
        else
            return {-1};
    }
    else{
        if(b-a>=3){
            if(a%3==0)
                return {a,a+3};
            else
                return {a+1,a+3};
        }
        else
            return {-1};
    }
}

int main(){
    _stdio();
    int t=1;
    cin>>t;
    while(t--){
        vector<long long> v=sol();
        for(long long i: v)
            cout<<i<<" ";
        cout<<endl;
    }
}