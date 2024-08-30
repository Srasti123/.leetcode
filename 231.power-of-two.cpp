/*
 * @lc app=leetcode id=231 lang=cpp
 *
 * [231] Power of Two
 */

// @lc code=start

class Solution 
{
public:
    bool isPowerOfTwo(int n) 
    {
        if(n==0) 
        return false; // because 0 is not a power of 2
        while(n%2==0) n/=2; //TC=O(1)
        return n==1;
    }
};
