//3 - Longest Common Prefix (Leetcode - 14)
//TC - O(m*n)
//SC - O(1)

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(pre) != 0) {
                pre.pop_back();
                if (pre.empty()) return "";
            }
        }
        return pre;
    }
};