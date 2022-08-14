// author: Jackie
// time: 22-8-14
// leetcode link: https://leetcode.cn/problems/delete-columns-to-make-sorted/solution/

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int col_num = strs[0].size();
        int ans = 0;
        for (int i = 0; i != col_num; ++i)
        {
            char prev = 'a';
            for (int k = 0; k != strs.size(); ++k)
            {
                if ( strs[k][i] < prev )
                {
                    ++ans;
                    break;
                } else {
                    prev = strs[k][i];
                }
            }
        }
        return ans;
    }
};