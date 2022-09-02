// author: Jackie
// time: 22-9-2
// leetcode link: https://leetcode.cn/problems/missing-number/

class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n = nums.size();
        int sum = n * (n+1) / 2;
        for (int val : nums)
        {
            sum -= val;
        }
        return sum;
    }
};