// author: Jackie
// time: 22-8-21
// leetcode link: https://leetcode.cn/problems/climbing-stairs/

class Solution {
public:
    int climbStairs(int n) 
    {
        int position[n+1];
        position[0] = 1;
        position[1] = 1;
        for (int i = 2; i != n + 1; ++i)
        {
            position[i] = position[i-1] + position[i-2];
        }
        return position[n];
    }
};