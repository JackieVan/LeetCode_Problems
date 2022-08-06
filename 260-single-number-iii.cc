// author: Jackie
// time: 22-8-6
// leetcode link: https://leetcode.cn/problems/single-number-iii/

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xor_sum = 0;
        for (int val : nums)
        {
            xor_sum ^= val;
        }
        // in fact, xor_sum = ans0 ^ ans1
        int key = xor_sum == INT_MIN ? INT_MIN : xor_sum & (-xor_sum);
        int val0 = 0, val1 = 0;
        for (int val : nums)
        {
            if (val & key)
            {
                val0 ^= val;
            }
            else
            {
                val1 ^= val;
            }
        }
        return { val0, val1 };
    }   
};