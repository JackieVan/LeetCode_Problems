// author: Jackie
// time: 22-8-3
// leetcode link: https://leetcode.cn/problems/minimum-number-of-steps-to-make-two-strings-anagram/

class Solution {
public:
    int minSteps(string s, string t) {
        int nums[26] = { 0 };
        for (const char& ch : s)
        {
            ++nums[ch - 'a'];
        }
        int step = 0;
        for (const char& ch : t)
        {
            if (nums[ch - 'a'] == 0)
            {
                ++step;
            }
            else
            {
                --nums[ch - 'a'];
            }
        }
        return step;
    }
};