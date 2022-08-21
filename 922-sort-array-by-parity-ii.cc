// author: Jackie
// time: 22-8-21
// leetcode link: https://leetcode.cn/problems/sort-array-by-parity-ii/

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) 
    {
        // std::vector<int> special[2];
        // for (int i = 0; i != nums.size(); ++i)
        // {
        //     if ((i & 1) != (nums[i] & 1))
        //     {
        //         special[i&1].push_back(i);
        //     }
        // }
        // for (int i = 0; i != special[1].size(); ++i)
        // {
        //     std::swap(nums[special[0][i]], nums[special[1][i]]);
        // }
        // return nums;
        int even = 0;
        int odd = nums.size() - 1;
        while (!(odd < 0 || even == nums.size()))
        {
            if ((nums[even] & 1) == 0)
            {
                even += 2;
                continue;
            }
            if ((nums[odd] & 1) == 1)
            {
                odd -= 2;
                continue;
            }
            std::swap(nums[odd], nums[even]);
            even += 2;
            odd -= 2;
        }
        return nums;
    }
};