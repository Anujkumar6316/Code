#include <iostream>
#include <vector>
#include <set>
#include <bits/stdc++.h>
using namespace std;




class Solution{
public:
	vector<int> sol(vector<int> nums, int target){
		for(int i=0;i<nums.size()-1;i++){
			for(int j=i+1;j<nums.size();j++){
				if(nums[i]+nums[j]==target)
					return {i,j};
			}
		}	
		return {-1};
	}
};

int main(){
	Solution s1;
	vector<int> ans=s1.sol({3,3},6);
	for(int i:ans)
		cout<<i<<" ";
	cout<<endl;
}