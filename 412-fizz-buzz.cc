// author: Jackie
// time: 22-9-5
// leetcode link: https://leetcode.cn/problems/fizz-buzz/

class Solution {
public:
    vector<string> fizzBuzz(int n) 
    {
        std::vector<string> ans(n, "");
        for (int i = 1; i != n + 1; ++i)
        {
            string& str = ans[i - 1];
            if (i % 3 == 0)
            {
                str += "Fizz";
            }
            if (i % 5 == 0)
            {
                str += "Buzz";
            }
            if (str == "")
            {
                str = std::to_string(i);
            }
        }
        return ans;
    }
};