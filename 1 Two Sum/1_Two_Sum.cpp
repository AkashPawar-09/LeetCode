#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> arr;                              // vector arr using pairs 

        for (int i = 0; i < nums.size(); i++) {                 // loop to add all elements of nums in arr 
            arr.push_back({nums[i], i});                        // store value + original index
        }

        sort(arr.begin(), arr.end());                           // Sort array from start to end 

        int left = 0, right = arr.size() - 1;                   // make 2 elements that will be returned

        while (left < right) {                                  // loop for 0 to n 
            int sum = arr[left].first + arr[right].first;       // take values at left and right pointers and compute their sum

            if (sum == target) {                                // if the current pair gives the required target
                return {arr[left].second, arr[right].second};   // return ORIGINAL indices (stored in pair.second)
            }
            else if (sum < target) {                            // if sum is small
                left++;                                         // move left pointer right to increase sum
            }
            else {                                              // if sum is too large
                right--;                                        // move right pointer left to decrease sum 
            }
        }

        return {false, false};                                  // return if target not found anything 
    }
};

// Time Complexity : O(N)
// Space Complexity : O(1)
