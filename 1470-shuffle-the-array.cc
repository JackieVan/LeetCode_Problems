// author: Jackie
// time: 22-8-2
// leetcode link: https://leetcode.cn/problems/shuffle-the-array/submissions/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        std::vector<int> ans(nums.size(), 0);
        int idx = 0;
        for (int i = 0; i != 2*n; i += 2)
        {
            ans[i] = nums[idx++];
        }
        // idx = n;
        for (int i = 1; i != 2*n + 1 ; i += 2)
        {
            ans[i] = nums[idx++];
        }
        return ans;
    }
};