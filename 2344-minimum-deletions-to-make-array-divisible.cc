// author: Jackie
// time: 22-7-31
// leetcode link: https://leetcode.cn/problems/minimum-deletions-to-make-array-divisible/submissions/

// class Solution {
// public:
//     int minOperations(vector<int>& nums, vector<int>& numsDivide) {
//         int erase_times = 0;
//         int pre_val = -1;
//         std::sort(nums.begin(), nums.end());
//         for (int i = 0; i != nums.size(); ++i)
//         {
//             if (i != 0 && nums[i] == pre_val)
//             {
//                 ++erase_times;
//                 continue;
//             }
//             int flag = true;
//             for (int val : numsDivide)
//             {
//                 if (val % nums[i] != 0)
//                 {
//                     flag = false;
//                     break;
//                 }
//             }
//             if (flag)
//             {
//                 return erase_times;
//             }
//             ++erase_times;
//             pre_val = nums[i];
//         }
//         return -1;
//     }
// };
class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int g = 0;
        for (int val : numsDivide)
        {
            g = std::gcd(val, g);
        }
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i != nums.size(); ++i)
        {
            if (g % nums[i] == 0)
            {
                return i;
            }
        }
        return -1;
    }
};