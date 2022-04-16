#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
        	for(int j=0;j<nums.size();j++){
        		if(i!=j)
        		if(nums[i]==nums[j])
        			return true;
        	}
        }
        return false;
    }
    bool sol2(vector<int> &nums);
};

bool Solution::sol2(vector<int> &nums){
	sort(nums.begin(),nums.end());
	for(int i=0;i<nums.size()-1;i++){
		if(nums[i]==nums[i+1])
			return true;
	}
	return false;
}

int main(){
	vector<int> nums={1,2,3,4};
	Solution s1;
	cout<<s1.containsDuplicate(nums)<<endl;
	cout<<s1.sol2(nums)<<endl;
}