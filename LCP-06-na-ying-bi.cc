// author: Jackie
// time: 22-8-8
// leetcode link: https://leetcode.cn/problems/na-ying-bi/

class Solution {
public:
    int minCount(vector<int>& coins) {
        int ans = 0;
        for (int num : coins)
        {
            ans += ( num + 1 ) / 2;
        }
        return ans;
    }
};