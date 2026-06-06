// 3 - Maximum Average Subarray I (Leetcode 643)
// TC: O(n)
// SC: O(1)

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxaverage;
        double sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        maxaverage = sum/k;
        int l = 0;
        int r = k;
        while (r < nums.size()) {
            sum -= nums[l];
            sum += nums[r];
            maxaverage = max(maxaverage,sum/k);
            l++;
            r++;
        }
        return maxaverage;
    }
};