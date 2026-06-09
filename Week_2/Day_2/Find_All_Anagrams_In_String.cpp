// 3 - Find all Anagrams in String (Leetcode 438)
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
    vector<int> findAnagrams(string s, string p) {
        vector <int> ans;
        if (p.length() > s.length()) return ans;
        int freqp[26] = {0};
        int freqs[26] = {0};
        for (int i = 0; i < p.length(); i++) {
            freqp[p[i]-'a']++;
            freqs[s[i]-'a']++;
        }
        if (FreqSame(freqp, freqs)) ans.push_back(0);
        int l = 0;
        int r = p.length();
        while (r < s.length()) {
            freqs[s[r]-'a']++;
            freqs[s[l]-'a']--;
            r++;
            l++;
            if (FreqSame(freqp, freqs)) ans.push_back(l);
        }
        return ans;
    }
};