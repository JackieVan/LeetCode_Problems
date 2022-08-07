// author: Jackie
// time: 22-8-7
// leetcode link: https://leetcode.cn/problems/k-closest-points-to-origin/

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans(k, vector<int>(2, 0));
        auto func = [](vector<int>& vec1, vector<int>& vec2)
        {
            return vec1[0]*vec1[0] + vec1[1]*vec1[1] <  vec2[0]*vec2[0] + vec2[1]*vec2[1];
        };
        std::sort(points.begin(), points.end(), func);
        for (int i = 0; i != k; ++i)
        {
            ans[i] = points[i];
        }
        return ans;
    }
};