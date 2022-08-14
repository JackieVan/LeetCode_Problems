// author: Jackie
// time: 22-8-14
// leetcode link: https://leetcode.cn/problems/gray-code/submissions/

class Solution {
public:
    vector<int> grayCode(int n) {
        std::vector<int> ans( 1 << n);
        for (int i = 0; i != ans.size(); ++i)
        {
            ans[i] = (i ^ (i >> 1));
        }
        return ans;
    }
};