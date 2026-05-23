#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();                  // n = size of digits array

        for (int i = n - 1; i >= 0; i--) {      // starting array from last digit to first digit

            if (digits[i] < 9) {                // if last element in array is less than 9
                digits[i] = digits[i] + 1;      // then add 1 to that element 
                return digits;                  // return the updated array 
            }
            else {digits[i] = 0;}               // if last is grater than 9 then make it 0
        
        }   // run this for loop until all elements are cheaked if they are greater than 9 or not 

        digits.insert(digits.begin(), 1);       
        // if all the digits are 9 
        // then all the digits were already 0 in upper loop 
        // then add 1 at the begining of array 

        return digits;                          // return digits vector
    }
};

// Time Complexity : O(N)
// Space Complexity : O(1)
