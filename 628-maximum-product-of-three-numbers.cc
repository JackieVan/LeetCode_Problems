// author: Jackie
// time: 22-7-29
// leetcode link: https://leetcode.cn/problems/maximum-product-of-three-numbers/submissions/

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        if (nums.size() == 3)
        {
            return nums[0] * nums[1] * nums[2];
        }
        int max[3] = { -1001, -1001, -1001 };
        int min[2] = { 1001, 1001 };

        for (int val : nums)
        {
            if (val > max[0])
            {
                max[2] = max[1];
                max[1] = max[0];
                max[0] = val;
            }
            else if (val > max[1])
            {
                max[2] = max[1];
                max[1] = val;
            }
            else if (val > max[2])
            {
                max[2] = val;
            }

            if (val < min[0])
            {
                min[1] = min[0];
                min[0] = val;
            }
            else if (val < min[1])
            {
                min[1] = val;
            }
        }

        return std::max(max[0] * max[1] * max[2], 
                        max[0] * min[1] * min[0]);
    }
};