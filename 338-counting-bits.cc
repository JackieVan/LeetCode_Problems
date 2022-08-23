// author: Jackie
// time: 22-8-23
// leetcode link: https://leetcode.cn/problems/counting-bits/

class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int> ans(n + 1);
        int power = 0;
        for (int i = 1; i != n + 1; ++i)
        {
            if (i == (1 << power))
            {
                ans[i] = 1;
                ++power;
                continue;
            }
            ans[i] = 1 + ans[i - (1 << (power - 1))];
        }
        return ans;
    }
};