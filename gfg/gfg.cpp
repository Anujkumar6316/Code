// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

void _stdio(){
    #ifndef ONLINE_JUDGE
    freopen("/home/anuj/input.txt","r",stdin);
    freopen("/home/anuj/output.txt","w",stdout);
    #endif
}

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        int i=0,j=0;
        long long maxsum=0;
        while(i<n){
            if(maxsum==s)
                return {i+1,j};
            if(maxsum<s){
                maxsum+=arr[j];
                j++;
            }
            else if(maxsum>s){
                maxsum-=arr[i];
                i++;
            }
        }
        return {-1};

    }
};

// { Driver Code Starts.

int main()
 {
    _stdio();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends