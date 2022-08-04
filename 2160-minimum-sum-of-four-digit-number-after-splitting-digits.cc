// author: Jackie
// time: 22-8-4
// leetcode link: https://leetcode.cn/problems/minimum-sum-of-four-digit-number-after-splitting-digits/

class Solution {
public:
    int minimumSum(int num) {
        int nums[4] = {0};
        nums[0] = num % 10;
        nums[1] = (num / 10 ) % 10;
        nums[2] = (num / 100) % 10;
        nums[3] = num / 1000;
        std::sort(nums, nums + 4);
        int val0 = nums[0] * 10 + nums[2] + nums[1] * 10 + nums[3];
        int val1 = nums[0] * 10 + nums[3] + nums[1] * 10 + nums[2];
        return std::min(val0, val1);
    }
};