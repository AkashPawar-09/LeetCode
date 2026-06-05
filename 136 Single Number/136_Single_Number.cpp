#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return -1; 
        if (n == 1) return nums[0];  
        for (int i = 0; i < n; i++){
            int count = 0;  
            for (int j = 0; j < n; j++){
                if (nums[i] == nums[j]){
                    count++;
                }
            }
            if (count == 1) return nums[i];  
        }
        return -1;  
    }
};

// Time Complexity : O(N²)
// Space Complexity: O(1)