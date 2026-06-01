// 2 - Remove Duplicates from Sorted Array (Leetcode 26)
// TC: O(n)
// SC: O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique=0;
        for (int i=1; i<nums.size(); i++) {
            if (nums[i]!=nums[unique]) {
                nums[unique+1]=nums[i];
                unique++;
            }
        }
        return unique+1;
    }
};