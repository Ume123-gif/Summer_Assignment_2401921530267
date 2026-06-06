// 1 - Maximum Subarray (Leetcode 53)
// TC: O(n)
// SC: O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = nums[0];
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (sum > maxsum) maxsum = sum;
            if (sum < 0) sum = 0;
        }
        return maxsum;
    }
};