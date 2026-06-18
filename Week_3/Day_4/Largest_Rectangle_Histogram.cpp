//3 - Largest rectangle in Histogram (Leetcode - 84)
//TC - O(n)
//SC - O(n)

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int ans = 0;
        stack <int> st;
        for (int i = 0; i <= heights.size(); i++) {
            int current = 0;
            if (i != heights.size()) current = heights[i];
            while (!st.empty() && current < heights[st.top()]) {
                int h = heights[st.top()];
                st.pop();
                int right = i;
                int left = st.empty() ? -1 : st.top();
                int w = right - left - 1;
                ans = max (ans, h*w);

            }
            st.push(i);
        }
        return ans;
    }
};