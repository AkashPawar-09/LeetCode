#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;     // if array is empty return 0

        int k = 1;                          // pointer to place next unique element

        for (int i = 1; i < nums.size(); i++) {     // iterate from second element
            if (nums[i] != nums[i - 1]) {           // check if current element in nums is different from previous elelment 
                nums[k] = nums[i];                  // then only place unique element at index k (starts from index 1)
                // modifying the actual input array 
                k++;                                // increment position for next unique element
            }
        }
        

        return k;                                   // It returns only the count of unique elements
        // NOT the array
    }
};


// Time Complexity: O(N)
// Space Complexity: O(1)