#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = x^y ;
        return countSetBits(n);
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



// Time: O(log n) 
// Space: O(1)