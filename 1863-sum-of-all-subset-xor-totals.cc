// author: Jackie
// time: 22-8-13
// leetcode link: https://leetcode.cn/problems/sum-of-all-subset-xor-totals/submissions/

class Solution {
public:
    int ans = 0;
    int n = 0;
    void dfs(int val, int idx, vector<int>& nums)
    {
        if (idx == n)
        {
            ans += val;
            return ;
        }
        dfs(val ^ nums[idx], idx + 1, nums );
        dfs(val, idx + 1, nums );
    }
    int subsetXORSum(vector<int>& nums)
    {
        ans = 0;
        n = nums.size();
        dfs(0, 0, nums);
        return ans;
    }
    // int subsetXORSum(vector<int>& nums) {
    //     int res = 0;
    //     int n = nums.size();
    //     for (auto num: nums){
    //         res |= num;
    //     }
    //     return res << (n - 1);
    // }
};