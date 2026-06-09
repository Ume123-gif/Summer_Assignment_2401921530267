// 2 - Permutation in String (Leetcode 567)
// TC: O(n)
// SC: O(1)

class Solution {
public:
    bool FreqSame(int freq1[], int freq2[]) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;
        int freqs1[26] = {0};
        int freqs2[26] = {0};
        for (int i = 0; i < s1.length(); i++) {
            freqs1[s1[i]-'a']++;
            freqs2[s2[i]-'a']++;
        }
        if (FreqSame(freqs1, freqs2)) return true;
        int l = 0;
        int r = s1.length();
        while (r < s2.length()) {
            freqs2[s2[r]-'a']++;
            freqs2[s2[l]-'a']--;
            if (FreqSame(freqs1, freqs2)) return true;
            r++;
            l++;
        }
        return false;
    }
};