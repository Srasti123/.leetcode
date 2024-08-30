/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {                      
public:
    int reverse(int x) {
        long r=0;      // declare r as a long to store the reversed number
        while(x){
            r = r * 10 + x % 10; // find remainder and add it to r
            x = x / 10;          // Update the value of x by removing the last digit
        }
        if(r > INT_MAX || r < INT_MIN) return 0; // check range; if r is outside the 32-bit range, return 0  
        return int(r);  // if r is within the 32-bit range, return r as an integer
    }
};
