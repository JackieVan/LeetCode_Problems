// author: Jackie
// time: 22-8-15
// leetcode link: https://leetcode.cn/problems/split-a-string-in-balanced-strings/solution/

class Solution {
public:
    int balancedStringSplit(string s) {
        int ans = 0;
        int flag = 0;
        for (char ch : s)
        {
            flag += ch == 'R' ? 1 : -1;
            ans += flag == 0;
        }
        return ans;
    }
};