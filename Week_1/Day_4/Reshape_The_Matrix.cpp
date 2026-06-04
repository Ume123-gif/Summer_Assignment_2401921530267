//2 - Reshape the Matrix (Leetcode - 556)
//TC - O(m*n)
//SC - O(1) excluding ans array

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if (m * n != r * c) {
            return mat;
        }
        vector<vector<int>> ans(r, vector<int>(c));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int ind = i*n+j;
                int nr = ind / c;
                int nc = ind % c;
                ans[nr][nc] = mat[i][j];
            }
        }
        return ans;
    }
};