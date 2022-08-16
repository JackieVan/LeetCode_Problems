// author: Jackie
// time: 22-8-16
// leetcode link: https://leetcode.cn/problems/que-shi-de-shu-zi-lcof/submissions/

class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        int lower = 0, upper = nums.size() - 1;
        while (lower <= upper)
        {
            int middle = (upper - lower) / 2 + lower;
            if (nums[middle] != middle)
            {
                upper = middle - 1;
            }
            else 
            {
                lower = middle + 1;
            }
        }
        return lower;
    }
};