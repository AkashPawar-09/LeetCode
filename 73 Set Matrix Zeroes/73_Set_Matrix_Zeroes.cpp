#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();                                  // number of rows
        int n = matrix[0].size();                               // number of columns

        bool firstRowZero = false;                              // making firstRowZero false ;
        bool firstColZero = false;                              // making firstColZero false ;

        for (int j = 0; j < n; j++) {                           // cheaks first row by using variable j 
            if (matrix[0][j] == 0) {                            // cheaks until row contains 0
                firstRowZero = true;                            // if contains make firstRowZero as true
                break;                                          // immediately break the loop                      
            }
        }

        for (int i = 0; i < m; i++) {                           // cheaks first col by using variable i
            if (matrix[i][0] == 0) {                            // cheaks until col contains 0
                firstColZero = true;                            // if contains make firstColZero as true
                break;                                          // immediately break the loop 
            }
        }

        for (int i = 1; i < m; i++) {                           // traverse through all elements in matrix 
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] == 0) {                        // if element found to be 0
                    matrix[i][0] = 0;                           // this marks column wise 0 (iteration)
                    matrix[0][j] = 0;                           // this marks row wise 0 (iteration)
                }
            }
        }

        for (int i = 1; i < m; i++) {                           // traverse through all elements in matrix  
            for (int j = 1; j < n; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {   // cheak markings from above loop 
                    matrix[i][j] = 0;                           // make element zero (using OR operation)  
                }
            }
        }

        if (firstRowZero) {                                     // if row contains another zero 
            for (int j = 0; j < n; j++) {                       // iteration 
                matrix[0][j] = 0;                               // make whole row zero
            }
        }

        if (firstColZero) {                                     // if column contains another zero 
            for (int i = 0; i < m; i++) {                       // iteration 
                matrix[i][0] = 0;                               // make that whole column zero 
            }
        }
    }
};

// Time Complexity : O(m × n)
// Space Complexity : O(1)