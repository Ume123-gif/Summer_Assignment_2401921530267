//1 - Matrix Diagonal Sum (Leetcode - 1572)
//TC - O(n)
//SC - O(1)

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m = mat.size();
        int sumdiagonal = 0;
        for (int i = 0; i < m; i++) {
            sumdiagonal += mat[i][i];
            sumdiagonal += mat[i][m-i-1];
        }
        if (m%2 != 0) sumdiagonal -= mat[m/2][m/2];
        return sumdiagonal;
    }
};