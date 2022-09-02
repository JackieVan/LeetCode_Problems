// author: Jackie
// time: 22-9-2
// leetcode link: https://leetcode.cn/problems/contains-duplicate/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        std::sort(nums.begin(), nums.end());
        for (int i = 1; i != nums.size(); ++i)
        {
            if (nums[i] == nums[i-1])
            {
                return true;
            }
        }
        return false;
    }
};