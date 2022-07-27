// author: Jackie
// time: 22-7-26
// leetcode link: https://leetcode.cn/problems/most-frequent-number-following-key-in-an-array/submissions/

class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int *times = new int[1001];
        int ans = 0;
        for (int i = 0; i != nums.size() - 1; ++i)
        {
            if (nums[i] == key && ++times[nums[i+1]] > times[ans])
            {
                ans = nums[i+1];
            }
        }
        delete[] times;
        return ans;
    }
};