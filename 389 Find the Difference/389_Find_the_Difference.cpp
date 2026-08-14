#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = 0;
        for (char c : s) {ans = ans ^ c;}
        for (char c : t) {ans = ans ^ c;}
        return ans;
    }
};


// Time Complexity : O(M+N)
// Space Complexity : O(1)