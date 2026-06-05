#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size() ;
        int minPrice = INT_MAX;                             // INT_MAX = 2,147,483,647  ||  2^31 - 1

        int maxProfit = 0;                                  // Now maxProfit is 0 ---> Later on update it 

        for (int i = 0 ; i < n ; i++) {                     // iteration over i=0 to i=n
            if(prices[i] < minPrice) {minPrice=prices[i] ;}       // update minPrice by every element (buy day)
            else {maxProfit = max(maxProfit,prices[i] - minPrice) ;}       // when no new array greater then minPrice , performs else
        }
            // in else statement , we calculate maximum between maxProfit and arr[i] - minPrice  (sell day)

        return maxProfit;                                   // return maxProfit in else statement 
    }
};

// Time Comlexity : O(n)
// Space Complexity : O(1)