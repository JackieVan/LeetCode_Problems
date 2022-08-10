// author: Jackie
// time: 22-8-10
// leetcode link: https://leetcode.cn/problems/fan-zhuan-dan-ci-shun-xu-lcof/submissions/

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string ans, temp;
        ss >> ans;
        while (ss >> temp)
        {
            ans = temp + " " + ans;
        }
        return ans;
    }
};