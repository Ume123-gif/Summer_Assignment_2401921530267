class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        for (int len = 1; len <= n/2; len++) {
            if (n % len == 0) {
                string pat = s.substr(0, len);
                string temp = "";
                int rep = n/len;
                for (int i = 0; i < rep; i++) {
                    temp += pat;
                }
                if (temp == s) return true;
            }
        }
        return false;
    }
};