// author: Jackie
// time: 22-8-3
// leetcode link: https://leetcode.cn/problems/truncate-sentence/

class Solution {
public:
    string truncateSentence(string s, int k) {
        int ans = 0;
        int idx = -1;
        for (char ch : s)
        {
            ++idx;
            if (ch == ' ' && ++ans == k)
            {
                break;
            }
        }
        if (ans < k)
        {
            ++idx;
        }
        return string(s, 0, idx);
    }
};