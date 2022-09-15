// author: Jackie
// time: 22-9-9
// leetcode link: https://leetcode.cn/problems/3sum/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        std::vector<vector<int>> ans;
        int n = nums.size();
        std::sort(nums.begin(), nums.end());
        for (int first = 0; first != n; ++first)
        {
            if (first > 0 && nums[first] == nums[first - 1])
            {
                continue;
            }
            int res_target = 0 - nums[first];
            int third = n - 1;
            for (int second = first + 1; second != n; ++second)
            {
                if (second > first + 1 && nums[second] == nums[second - 1])
                {
                    continue;
                }
                while (third > second && nums[second] + nums[third] > res_target)
                {
                    --third;
                }
                if (third == second)
                {
                    break;
                }
                if (nums[third] + nums[second] == res_target)
                {
                    ans.push_back({nums[first], nums[second], nums[third]});
                }
            }
        }
        return ans;
    }
};