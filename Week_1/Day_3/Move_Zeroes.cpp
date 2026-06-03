//3 - Move Zeroes (Leetcode - 283)
//TC - O(n)
//SC - O(1)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int temp = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) continue;
            else {
                swap (nums[i], nums[temp]);
                temp++;
            }
        }
    }
};