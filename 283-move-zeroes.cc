// author: Jackie
// time: 22-8-24
// leetcode link: https://leetcode.cn/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size(), left = 0, right = 0;
        while (right < n) 
        {
            if (nums[right]) 
            {
                swap(nums[left], nums[right]);
                left++;
            }
            right++;
        }
    }
};