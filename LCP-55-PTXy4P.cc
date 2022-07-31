// author: Jackie
// time: 22-7-26
// leetcode link: https://leetcode.cn/problems/PTXy4P/

class Solution {
public:
    int getMinimumTime(vector<int>& time, vector<vector<int>>& fruits, int limit) {
        int total_time = 0;
        for (int i = 0; i != fruits.size(); ++i)
        {
            int type = fruits[i][0];
            int num = fruits[i][1];
            total_time += time[type] * (int)ceil((float)num / (float)limit);
        }
        return total_time;
    }
};