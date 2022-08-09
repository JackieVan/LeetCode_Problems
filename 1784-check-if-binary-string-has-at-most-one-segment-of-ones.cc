// author: Jackie
// time: 22-8-9
// leetcode link: https://leetcode.cn/problems/check-if-binary-string-has-at-most-one-segment-of-ones/

class Solution {
public:
    bool checkOnesSegment(string s) {
        int one_seg = 1;
        for (int i = 1; i != s.size(); ++i)
        {
            if (s[i] == '1' && s[i - 1] != '1')
            {
                one_seg++;
            }
        }
        return one_seg <= 1;
    }
};