// author: Jackie
// time: 22-8-15
// leetcode link: https://leetcode.cn/problems/count-number-of-maximum-bitwise-or-subsets/submissions/

class Solution {
    int or_val = 0;
    int ans = 0;
    void helper(vector<int>& nums, int curr, int idx)
    {
        if (idx == nums.size())
        {
            ans += (curr == or_val);
            return;
        }
        // skip this number
        helper(nums, curr, idx + 1);
        // consider this number
        helper(nums, curr | nums[idx], idx + 1);
    }

public:
    int countMaxOrSubsets(vector<int>& nums) {
        for (int val : nums)
        {
            or_val |= val;
        }
        helper(nums, 0, 0);
        return ans;
    }
};