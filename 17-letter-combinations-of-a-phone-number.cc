// author: Jackie
// time: 22-8-15
// leetcode link: https://leetcode.cn/problems/letter-combinations-of-a-phone-number/

class Solution {
    vector<string> table = { "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
    std::vector<string> ans;

    void helper(int idx, const string& curr, const string& digits)
    {
        if (idx == digits.size())
        {
            ans.push_back(curr);
            return;
        }
        const string& str = table[digits[idx] - '2'];
        for (char ch : str)
        {
            helper(idx + 1, curr + string(1, ch), digits);
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        ans.reserve(pow(3, digits.size()));
        if (digits.size())
        {
            helper(0, "", digits);
        }
        return ans;
    }
};