// 2 - Decode String 
// TC: O(n*k)
// SC: O(n)

class Solution {
public:
    string decodeString(string s) {
        stack<int> countSt;
        stack<string> strSt;
        string curr = "";
        int num = 0;
        for(char c : s) {
            if(isdigit(c)) {
                num = num * 10 + (c - '0');
            }
            else if(c == '[') {
                countSt.push(num);
                strSt.push(curr);
                num = 0;
                curr = "";
            }
            else if(c == ']') {
                int k = countSt.top();
                countSt.pop();
                string prev = strSt.top();
                strSt.pop();
                while(k--) prev += curr;
                curr = prev;
            }
            else {
                curr += c;
            }
        }
        return curr;
    }
};