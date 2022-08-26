// author: Jackie
// time: 22-8-26
// leetcode link: https://leetcode.cn/problems/plus-one/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits)
    {
        bool carry = true;
        int idx = digits.size() - 1;
        while (carry && idx >= 0)
        {
            digits[idx] += 1;
            carry = false;
            if (digits[idx] > 9)
            {
                digits[idx] -= 10;
                carry = true;
            }
            --idx;
        }
        if (carry)
        {
            vector<int> res(digits.size() + 1);
            res[0] = 1;
            return res;
        }
        return digits;
    }
};