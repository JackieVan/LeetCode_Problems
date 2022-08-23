// author: Jackie
// time: 22-8-22
// leetcode link: https://leetcode.cn/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) 
    {
        std::map<char, char> map = { {')', '('}, {'}', '{'}, {']', '['} };
        std::stack<char> stack;
        for (char ch : s)
        {
            if (stack.size() != 0 && stack.top() == map[ch])
            {
                stack.pop();
            }
            else
            {
                stack.push(ch);
            }
        }
        return stack.size() == 0;
    }
};