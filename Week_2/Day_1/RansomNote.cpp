// 3 - Ransom Note (Leetcode 383)
// TC: O(m+n)
// SC: O(1)

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26] = {0};
        if (ransomNote.length() > magazine.length())
            return false;
        for (int i = 0; i < magazine.length(); i++) {
            freq[magazine[i]-'a']++;
        }
        for (int i = 0; i < ransomNote.length(); i++) {
            if (freq[ransomNote[i]-'a'] == 0) {
                return false;
            }
            freq[ransomNote[i]-'a']--;
        }
        return true;
    }
};