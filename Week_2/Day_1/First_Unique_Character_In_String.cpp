// 2 - First Unique Character in a String (Leetcode 387)
// TC: O(n)
// SC: O(n)

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map <char, int> mpp;
        queue <int> Q;
        for (int i = 0; i < s.length(); i++) {
            if (mpp.find(s[i]) == mpp.end()) {
                Q.push(i);
            }
            mpp[s[i]]++;
            while (Q.size()>0 && mpp[s[Q.front()]]>1) {
                Q.pop();
            }
        }
        if (Q.empty()) return -1;
        return Q.front();
    }
};