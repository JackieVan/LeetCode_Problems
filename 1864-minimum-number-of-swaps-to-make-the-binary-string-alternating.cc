// author: Jackie
// time: 22-8-14
// leetcode link: https://leetcode.cn/problems/minimum-number-of-swaps-to-make-the-binary-string-alternating/submissions/

class Solution {
public:
    int minSwaps(string s) 
    {
        int ans = 0;
        int n = s.size();
        int num_one = 0, num_zero = 0, num_odd1 = 0;
        if (n <= 1)
        {
            return 0;
        }
        for (int i = 0; i != n; ++i)
        {
            if (s[i] == '1')
            {
                ++num_one;
                if (i % 2 == 0)
                {
                    ++num_odd1;
                }
            } 
            else 
            {
                ++num_zero;
            }
        }
        if (abs(num_one - num_zero) > 1)
        {
            return -1;
        }
        if (n % 2 == 0)
        {
            ans = std::min(num_odd1, n / 2 - num_odd1);
        }
        else if (num_one > num_zero) 
        {
            ans = num_one - num_odd1;
        } 
        else 
        {
            ans = num_odd1;
        }
        return ans;
    }
};