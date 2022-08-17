// author: Jackie
// time: 22-8-16
// leetcode link: https://leetcode.cn/problems/friends-of-appropriate-ages/submissions/

class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        int n = ages.size();
        sort(ages.begin(), ages.end());
        int left = 0, right = 0, ans = 0;
        for (int age: ages)
        {
            if (age < 15) 
            {
                continue;
            }
            while (ages[left] <= 0.5 * age + 7)
            {
                ++left;
            }
            while (right + 1 < n && ages[right + 1] <= age)
            {
                ++right;
            }
            ans += right - left;
        }
        return ans;
    }
};