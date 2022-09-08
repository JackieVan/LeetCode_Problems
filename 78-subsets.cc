// author: Jackie
// time: 22-9-8
// leetcode link: https://leetcode.cn/problems/subsets/

class Solution {
    vector<vector<int>> ans;
    void traverse(vector<int>& nums, vector<int> part_sol, int i)
    {
        if (i == nums.size())
        {
            ans.push_back(part_sol);
            return;
        }
        traverse(nums, part_sol, i + 1);
        part_sol.push_back(nums[i]);
        traverse(nums, part_sol, i + 1);
    }


public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        std::vector<int> part_sol;
        traverse(nums, part_sol, 0);
        return ans;
    }
};