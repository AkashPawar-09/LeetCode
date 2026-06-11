#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;              // Tracks balance
        int element = 0;            // Candidate for majority

        for (int i : nums) {

            if (count == 0) {       // If count is 0 (default) 
                element = i;        // take new number
            }
            if (i == element) {     // if i equals to element while increament of i
                count++;            // increase count 
            }
            else {
                count--;            // other-wise decreament it (after decreament it becomes -1 )
            }
        }

        // Verification step

        int freq = 0;
        for (int num : nums) {
            if (num == element) freq++;     // increase frquency of
        }

        if (freq > nums.size() / 2) {       // cheaks condition of majority element 
            return element;                 // if condition is passed , return that element
        }

        return -1;                          // if no majority element exists
    }
};

