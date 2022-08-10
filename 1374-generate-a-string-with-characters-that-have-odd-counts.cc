// author: Jackie
// time: 22-8-10
// leetcode link: https://leetcode.cn/problems/generate-a-string-with-characters-that-have-odd-counts/submissions/

class Solution {
public:
    string generateTheString(int n) {
        if ((n & 1) == 1)
        {
            return string(n, 'a');
        }
        return "b" + generateTheString(n - 1);
    }
};