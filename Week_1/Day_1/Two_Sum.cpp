// 1 - Two Sum (Leetcode 1)
// TC: O(n logn)
// SC: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int,int> mpp;
        for (int i=0; i<nums.size(); i++) {
            int num1=nums[i];
            int extra=target-num1;
            if (mpp.find(extra)!=mpp.end()) {
                return {mpp[extra],i};
            }
            mpp[num1]=i;
        }
        return {};
    }
};