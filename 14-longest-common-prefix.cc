// author: Jackie
// time: 22-8-17
// leetcode link: https://leetcode.cn/problems/longest-common-prefix/submissions/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int min_size = INT_MAX;
        for (const string& str : strs)
        {
            min_size = min_size < str.size() ? min_size : str.size();
        }
        int idx = 0;
        while (idx < min_size)
        {
            char n = strs[0][idx];
            for (int i = 1; i != strs.size(); ++i)
            {
                if (strs[i][idx] != n)
                {
                    return ans;
                }
            }
            ans.append(1, n);
            ++idx;
        }
        return ans;
    }
};