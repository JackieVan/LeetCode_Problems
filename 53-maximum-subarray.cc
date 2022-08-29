// author: Jackie
// time: 22-8-29
// leetcode link: https://leetcode.cn/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        // std::vector<int> dp(nums.size(), nums[0]);
        int ans = nums[0];
        int pre = 0;
        for (int i = 0; i != nums.size(); ++i)
        {
            pre = std::max(pre + nums[i], nums[i]);
            ans = std::max(pre, ans);
        }
        return ans;
    }
};