// author: Jackie
// time: 22-8-25
// leetcode link: https://leetcode.cn/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int slow = 1;
        int fast = 1;
        while (fast != nums.size())
        {
            if (nums[fast] > nums[slow - 1])
            {
                nums[slow++] = nums[fast];
            }
            ++fast;
        }
        return slow;
        // int prev = nums[0];
        // int dup_count = 0;
        // for (int i = 1; i != nums.size(); ++i)
        // {
        //     if (nums[i] == prev)
        //     {
        //         ++dup_count;
        //     }
        //     else {
        //         prev = nums[i];
        //         nums[i - dup_count] = nums[i];
        //     }
        // }
        // return nums.size() - dup_count;
    }
};