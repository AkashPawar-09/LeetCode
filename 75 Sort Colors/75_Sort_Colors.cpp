#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        int low = 0;                            // First element
        int mid = 0;                            // Current element in while loop 
        int high = nums.size() - 1;             // Last element 

        while (mid <= high) {                   // Traverse until mid crosses high

            if (nums[mid] == 0) {               // Case 1: Element is 0 → move to left
                swap(nums[low], nums[mid]);     // Place 0 at at starting postion 
                low++;                          // expand 0 region
                mid++;                          // increment of mid (for while loop)
            }

            else if (nums[mid] == 1) {          // Case 2: Element is 1 → already correct
                mid++;                          // increment of mid (for while loop)
            }

            else {                              // Case 3 : If Element is 2 → move to right
                swap(nums[mid], nums[high]);    // Place 2 at correct position
                high--;                         // shrink right region
            }
        }
    }
};


// Time Complexity : O(N)
// Space Complexity : O(1)