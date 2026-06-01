#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long minimum = LLONG_MIN;                          // int → usually 32-bit → range: about −2 billion to +2 billion
        // by using int INT_MIN , it may stack overflow         // long long → 64-bit → range: about −9 × 10¹⁸ to +9 × 10¹⁸
        // INT_MIN = -2,147,483,648 , but for LLONG_MIN value is -9223372036854775808

        long long sum = 0;                                      // defined some as long long data type
        
        for (int i = 0; i < nums.size(); i++) {                 // iteration through i = 0 to size of nums
            
            sum += nums[i];                                     // updation of sum variable
            
            if (sum > minimum) {                                // if sum is grater than maxi (-9223372036854775808)
                minimum = sum;                                  // update minimum with sum
            }
            
            if (sum < 0) {                                      // if sum becomes negative 
                sum = 0;                                        // reset sum to zero 
            }
        }
        
        return minimum;                                         // return updated value of minimum
    }
};

// Time Complexity: O(N)
// Space Complexity: O(1)
