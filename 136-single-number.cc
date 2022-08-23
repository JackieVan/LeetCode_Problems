// author: Jackie
// time: 22-8-23
// leetcode link: https://leetcode.cn/problems/single-number/

class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int ans = 0;
        for (int val : nums)
        {
            ans ^= val;
        }
        return ans;
    }
};