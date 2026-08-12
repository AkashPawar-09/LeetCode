#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int a = start & goal ;
        int b = start | goal ;
        int x = countSetBits(a);
        int y = countSetBits(b);
        return abs(x-y);
    }
    int countSetBits(int n) {
        int count = 0;
        while (n) {                         // loop till n becomes 0 (false)
            count = count + (n & 1);        // increases count if last bit is 1
            n = n >> 1;                     // move all bits to right side (removes last automatically)
        }
        return count;                       // returns count
    }
};


// Time Complexity : O(N)
// Space Complexity : O(1)