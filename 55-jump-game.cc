// author: Jackie
// time: 22-9-8
// leetcode link: https://leetcode.cn/problems/jump-game/

class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int curr_desti = 0;
        for (int i = 0; i != nums.size(); ++i)
        {
            if (i <= curr_desti)
            {
                curr_desti = std::max(curr_desti, i + nums[i]);
                if (curr_desti >= nums.size() - 1)
                {
                    return true;
                }
            }
        }
        return false;
    }
};