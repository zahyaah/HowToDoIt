// Matrix Diagonal Sum
// Link -> https://leetcode.com/problems/matrix-diagonal-sum/

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int store = 0, c = mat[0].size()-1; 
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[0].size(); j++) {
                if (i == j) store+=mat[i][j];
                else if ((i+j) == mat.size()-1) store+=mat[i][j];
            }
        }
        return store; 
    }
};