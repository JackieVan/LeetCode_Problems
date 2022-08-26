// author: Jackie
// time: 22-8-26
// leetcode link: https://leetcode.cn/problems/sqrtx/

class Solution {
public:
    int mySqrt(int x) 
    {
        if (x == 0) return 0;
        int ans = 1;
        while (ans <= x / ans)
        {
            ++ans;
        }
        return ans - 1;
    }
};