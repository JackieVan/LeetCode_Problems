// author: Jackie
// time: 22-7-26
// leetcode link: https://leetcode.cn/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> map;
        int idx = 0;
        for ( int val : nums )
        {
            if (map.count(target - val) != 0 )
            {
                return { map[target-val], idx++ };
            }
            else {
                map[val] = idx++;
            }
        }
        return std::vector<int>();
    }
};
