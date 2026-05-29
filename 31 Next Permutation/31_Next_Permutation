#include<bits/stdc++.h>
using namespace std ;


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();                            // total elements in array
        int i;                                          // stores the break point index

        // Step 1: Find breaking point
        for (i = n - 2; i >= 0; i--) {                  // start from second-last, scan left
            if (nums[i] < nums[i + 1]) {                // found element smaller than its right neighbor
                break;                                  // this is our break point, stop here
            }
        }
        // if whole array is descending (eg: 5,4,3), loop ends with i = -1

        // Step 2: Find next greater element and swap
        if (i >= 0) {                                   // skip this step if no break point found
            for (int j = n - 1; j > i; j--) {           // scan from rightmost element towards i
                if (nums[j] > nums[i]) {                // find the smallest element greater than nums[i]
                    swap(nums[i], nums[j]);             // swap break point with that element
                    break;                              // one swap is enough, stop
                }
            }
        }

        // Step 3: Reverse suffix using for loop
        for (int left = i + 1, right = n - 1; left < right; left++, right--) {     // two pointers on both ends of suffix
            swap(nums[left], nums[right]);                                          // reverse suffix to make it smallest order
        }
        // suffix was in descending order, reversing gives ascending = smallest arrangement
    }
};


// Time Complexity: O(N)
// Space Complexity: O(1)