//2 - Reverse String (Leetcode - 344)
//TC - O(n)
//SC - O(1)

class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0; 
        int r = s.size()-1;
        while (l < r) {
            swap(s[l++],s[r--]);
        }
    }
};