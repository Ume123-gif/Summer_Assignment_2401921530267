//1 - Evaluate Reverse Polish Notation (Leetcode - 150)
//TC - O(n)
//SC - O(n)

class Solution {
public:
    int evalRPN(vector<string>& nums) {
        stack <int> st;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == "+" || nums[i] == "-" || nums[i] == "*" || nums[i] == "/") {
                int num1 = (int)st.top();
                st.pop();
                int num2 = (int)st.top();
                st.pop();
                if (nums[i] == "+") {
                    st.push(num1+num2);
                }
                else if (nums[i] == "-") {
                    st.push(num2-num1);
                }
                else if (nums[i] == "*") {
                    st.push(num1*num2);
                }
                else {
                    st.push(num2/num1);
                }
            }
            else {
                int num = stoi(nums[i]);
                st.push(num);
            }
        }
        return st.top();
    }
};