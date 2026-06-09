// 1 - Longest substring Without Repeating Characters (Leetcode 3)
// TC: O(n)
// SC: O(1)

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen = 0;
        int r = 0;
        int l = 0;
        int hash[256];
        for(int i = 0; i < 256; i++) hash[i] = -1;
        while (r < s.length()) {
            if (hash[s[r]] >= l) {
                l = hash[s[r]] + 1;
            }
            maxlen = max(maxlen, r - l + 1);
            hash[s[r]] = r;
            r++;
        }
        return maxlen;
    }
};