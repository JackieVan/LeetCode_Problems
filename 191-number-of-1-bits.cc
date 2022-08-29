// author: Jackie
// time: 22-8-29
// leetcode link: https://leetcode.cn/problems/number-of-1-bits/

class Solution {
public:
    int hammingWeight(uint32_t n) 
    {
        int ans = 0;
        while (n != 0)
        {
            ++ans;
            n &= n-1;
        }
        return ans;
        // return __builtin_popcount(n);    
    }
};