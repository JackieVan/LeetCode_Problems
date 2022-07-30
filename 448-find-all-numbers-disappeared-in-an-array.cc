// author: Jackie
// time: 22-7-30
// leetcode link: https://leetcode.cn/problems/find-all-numbers-disappeared-in-an-array/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int size = nums.size();
        std::vector<int> res;
        res.reserve(size / 2);
        std::vector<int> label(size, 0);
        for (int val : nums)
        {
            label[val - 1] = 1;
        }
        for (int i = 0; i != size; ++i)
        {
            if (label[i] == 0)
            {
                res.push_back(i+1);
            }
        }
        return res;
    }
};