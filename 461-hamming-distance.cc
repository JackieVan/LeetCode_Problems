// author: Jackie
// time: 22-8-23
// leetcode link: https://leetcode.cn/problems/hamming-distance/

class Solution {
public:
    int hammingDistance(int x, int y) 
    {
        return __builtin_popcount(x ^ y);
        // x ^= y;
        // int ans = 0;
        // while (x != 0)
        // {
        //     ++ans;
        //     x &= x-1;
        // }
        // return ans;
    }
};