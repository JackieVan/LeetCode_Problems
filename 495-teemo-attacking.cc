// author: Jackie
// time: 22-8-8
// leetcode link: https://leetcode.cn/problems/teemo-attacking/submissions/

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans = 0;
        for (int i = 1; i != timeSeries.size(); ++i)
        {
            ans += std::min(duration, timeSeries[i] - timeSeries[i-1]);
        }
        return ans + duration;
    }
};