//2 - Squares of a Sorted Array (Leetcode - 977)
//TC - O(n)
//SC - O(1) - excluding ans array

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int left = 0, right = n - 1;
        int position = n-1;
        while (left <= right) {
            int Sq1 = nums[left]*nums[left];
            int Sq2 = nums[right]*nums[right];
            if (Sq1 > Sq2) {
                ans[position] = Sq1;
                left++;
            } else {
                ans[position] = Sq2;
                right--;
            }
            position--;
        }

        return ans;
    }
};