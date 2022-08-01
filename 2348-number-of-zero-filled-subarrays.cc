// author: Jackie
// time: 22-7-26
// leetcode link: https://leetcode.cn/problems/number-of-zero-filled-subarrays/submissions/

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0;
        long long continous_zero = 0;
        for (int val : nums)
        {
            if (val == 0)
            {
                ans += ++continous_zero;
            }
            else
            {
                continous_zero = 0;
            }
        }
        return ans;
    }
};