// author: Jackie
// time: 22-8-14
// leetcode link: https://leetcode.cn/problems/removing-minimum-and-maximum-from-array/submissions/

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int idx1 = max_element(nums.begin(), nums.end()) - nums.begin();        
        int idx2 = min_element(nums.begin(), nums.end()) - nums.begin();        
        int small = idx1 < idx2 ? idx1 : idx2;
        int big = idx1 > idx2 ? idx1 : idx2;
        int n1 = small;
        int n2 = big - small - 1;
        int n3 = nums.size() - big - 1;
        return 2 + std::min(std::min(n1 + n2, n2 + n3), n1 + n3);
    }
};