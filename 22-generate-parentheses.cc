// author: Jackie
// time: 22-9-13
// leetcode link: https://leetcode.cn/problems/generate-parentheses/

class Solution {
    vector<string> ans;
    void gen(string str, int state, int n)
    {
        if ( n == 0 )
        {
            if (state == 0)
            {
                ans.push_back(str);
            }
            return;
        }
        if (state > 0)
        {
            gen(str + "(", state + 1, n - 1);
            gen(str + ")", state - 1, n - 1);
        } 
        else if (state == 0)
        {
            gen(str + "(", 1, n - 1);
        }
    }

public:
    vector<string> generateParenthesis(int n) 
    {
        gen("", 0, n * 2);
        return ans;        
    }
};