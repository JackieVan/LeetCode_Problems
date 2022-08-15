// author: Jackie
// time: 22-8-15
// leetcode link: https://leetcode.cn/problems/percentage-of-letter-in-string/submissions/

class Solution {
public:
    int percentageLetter(string s, char letter) {
        int letter_num = 0;
        for (char ch : s)
        {
            letter_num += ch == letter;
        }
        return 100 * letter_num / s.size();
    }
};