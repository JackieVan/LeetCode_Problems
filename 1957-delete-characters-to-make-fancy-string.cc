// author: Jackie
// time: 22-8-15
// leetcode link: https://leetcode.cn/problems/delete-characters-to-make-fancy-string/submissions/

class Solution {
public:
    string makeFancyString(string s) {
        string ans;
        for (int i = 0; i != s.size(); ++i)
        {
            char ch = s[i];
            if (i >= 2 && ch == ans[ans.size() - 1] && ch == ans[ans.size() - 2])
            {
                continue;
            }
            ans.append(1, ch);
        }
        return ans;
    }
};