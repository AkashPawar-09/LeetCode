#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size();                                   // Number of rows
        int cols = matrix[0].size();                                // Number of columns

        vector<vector<int>> ansMatrix(cols, vector<int>(rows));     // Create answer matrix

        for (int i = 0; i < rows; i++) {                            // outer loop for rows
            for (int j = 0; j < cols; j++) {                        // inner loop for cols
                ansMatrix[j][rows - 1 - i] = matrix[i][j];          // updating ansMatrix by using i,j 
            }
        }
        matrix = ansMatrix;                                         // updating matrix with ansMatrix
    }
};

// Time Complexity : O(N²)
// Space Complexity : O(1)
