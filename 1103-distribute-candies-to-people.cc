// author: Jackie
// time: 22-8-14
// leetcode link: https://leetcode.cn/problems/distribute-candies-to-people/

class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people);
        int order = 0;
        int last_num = 0;
        while (candies != 0)
        {
            int get = std::min(++last_num, candies);
            ans[order % num_people] += get;
            candies -= get;
            ++order;
        }
        return ans;
    }
};