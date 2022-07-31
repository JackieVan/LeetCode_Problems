// author: Jackie
// time: 22-7-31
// leetcode link: https://leetcode.cn/problems/greatest-sum-divisible-by-three/

class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int remainder[3] = { 0 };
        for ( int i = 0; i != nums.size(); ++i )
        {
            int add_res_0 = remainder[0] + nums[i];
            int add_res_1 = remainder[1] + nums[i];
            int add_res_2 = remainder[2] + nums[i];
            remainder[add_res_0 % 3] = std::max(remainder[add_res_0 % 3], add_res_0);
            remainder[add_res_1 % 3] = std::max(remainder[add_res_1 % 3], add_res_1);
            remainder[add_res_2 % 3] = std::max(remainder[add_res_2 % 3], add_res_2);
        }
        return remainder[0];
    }
};