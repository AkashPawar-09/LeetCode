#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n==1){return true ;}
        bool answer = false ;
        if (n<=0){return false ;}
        for (int i = 0 ; i < 30; i=i+2){
            if ((4<<i)==n) {
                answer = true ;
                break ;
            }
        }
        return answer ;
    }
};

// Time Complexity : O(1)
// Space Complexity : O(1)