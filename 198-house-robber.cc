// author: Jackie
// time: 22-9-7
// leetcode link: https://leetcode.cn/problems/house-robber/

class Solution {
public:
    int rob(vector<int>& nums) 
    {
        int n = nums.size();
        int dp[n];
        dp[0] = nums[0];
        if (n == 1)
        {
            return dp[0];
        }
        dp[1] = std::max(nums[1], nums[0]);
        for (int i = 2; i != nums.size(); ++i)
        {
            dp[i] = std::max(dp[i-2] + nums[i], dp[i-1]);
        }
        return std::max(dp[n - 1], dp[n - 2]);
    }
};