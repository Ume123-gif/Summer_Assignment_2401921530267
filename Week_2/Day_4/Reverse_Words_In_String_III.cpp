// 1 - Reverse Words in String III (Leetcode 557)
// TC: O(n)
// SC: O(1)

class Solution {
public:
    string reverseWords(string s) {
        int start = 0; 
        string word;
        for (int end = 0; end <= s.length(); end++) {
            if (end == s.length() || s[end] == ' ') {
                reverse(s.begin() + start, s.begin() + end);
                start = end + 1;
            }
        }
        return s;
    }
};