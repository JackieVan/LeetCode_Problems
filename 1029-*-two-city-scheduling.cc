// author: Jackie
// time: 22-8-16
// leetcode link: https://leetcode.cn/problems/two-city-scheduling/submissions/

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int ans = 0;
        auto func = [](vector<int>& p1, vector<int>& p2)
        {
            return p1[0] - p1[1] < p2[0] - p2[1];
        };
        std::sort(costs.begin(), costs.end(), func);
        for (int i = 0; i != costs.size(); ++i)
        {
            ans += i < costs.size() / 2 ? costs[i][0] : costs[i][1];
        }
        return ans;
    }
};