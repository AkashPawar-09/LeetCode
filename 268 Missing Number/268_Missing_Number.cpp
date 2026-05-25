#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();                    // n = size of nums
        int expectedSum = n * (n + 1) / 2;      // expected sum formula
        int actualSum = 0;                      // variable that measures actualSum
        for (int i = 0; i < n; i++) {           // iteration over nums array
            actualSum += nums[i];               // actualSum stores all Element sum in it 
        }
        return expectedSum - actualSum;         // return the missing number by this method 
    }
};


// Time Complexity : O(N)
// Space Complexity : O(1)