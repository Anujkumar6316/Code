#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void maxSubArray(vector<int>& nums) {
        vector<int> a,b;
        int max=0;
        if(nums.size()>1){
        for(int i=0;i<nums.size();i++){
            max=nums[i];
            a.push_back(max);
            for(int j=i+1;j<nums.size();j++){
                max=max+nums[j];
                b.push_back(max);
            }
            a.push_back(*max_element(b.begin(),b.end()));
        }
        cout<<*max_element(a.begin(),a.end())<<endl;
        }
        else{
            cout<<nums[0]<<endl;
        }
    }
    void sol2(vector<int> nums){
            vector<int> ans;
            int max=0,i=0,j=nums.size()-1;
            while(i<nums.size()/2){
                while(j>=nums.size()/2){
                    for(int k=i;k<=j;k++)
                        max=max+nums[k];
                    ans.push_back(max);
                    if(nums[i]>nums[j])
                        j--;
                    else if(nums[i]<nums[j])
                        i++;
                    else{
                        while(nums[i]==nums[j])
                            if(nums[i+1]>nums[j-1])
                                j--;
                            else if(nums[i+1]<nums[j-1])
                                i++;
                    }
                }
            }
            cout<<*max_element(ans.begin(),ans.end())<<endl;
        }
        void kadanes_algo(vector<int> & nums){
            int currsum=0,maxsum=0;
            for(int i=0;i<nums.size();i++){
                currsum+=nums[i];
                if(currsum>maxsum)
                    maxsum=currsum;
                if(currsum<0)
                    currsum=0;
            }
            if(maxsum==0)
                cout<<*max_element(nums.begin(),nums.end());
            else
                cout<<maxsum<<endl;
        }
};

int main(){
    Solution s1;
    vector<int> v={-2,1,-3,4,-1,2,1,-5,4};
    s1.kadanes_algo(v);
}