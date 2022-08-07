// author: Jackie
// time: 22-8-7
// leetcode link: https://leetcode.cn/problems/sort-array-by-parity/submissions/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // vector<int> ans(nums.size(), 0);
        int idx_odd = nums.size() - 1;
        int idx_even = 0;
        while (idx_even < idx_odd)
        {
            while (idx_even <= idx_odd && (nums[idx_even] & 1) == 0)
            {
                ++idx_even;
            }
            while (idx_odd >= idx_even && (nums[idx_odd] & 1) == 1)
            {
                --idx_odd;
            }
            if (idx_even > idx_odd || idx_odd < idx_even)
            {
                break;
            }
            int temp = nums[idx_even];
            nums[idx_even] = nums[idx_odd];
            nums[idx_odd] = temp;
            ++idx_even;
            --idx_odd;
        }
        return nums;
    }
};

// class Solution {
// public:
//     vector<int> sortArrayByParity(vector<int>& nums) {
//         vector<int> ans(nums.size(), 0);
//         int idx_odd = nums.size() - 1;
//         int idx_even = 0;
//         for (int val : nums)
//         {
//             if ((val & 1) == 0)
//             {
//                 ans[idx_even++] = val;
//             }
//             else
//             {
//                 ans[idx_odd--] = val;
//             }
//         }
//         return ans;
//     }
// };