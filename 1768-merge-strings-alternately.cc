// author: Jackie
// time: 22-8-21
// leetcode link: https://leetcode.cn/problems/merge-strings-alternately/

class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        int idx1 = 0;
        int idx2 = 0;
        string ans;
        while (idx1 != word1.size() || idx2 != word2.size())
        {
            if (idx1 != word1.size())
            {
                ans.append(1, word1[idx1++]);
            }
            if (idx2 != word2.size())
            {
                ans.append(1, word2[idx2++]);
            }
        }
        return ans;
    }
};