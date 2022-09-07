// author: Jackie
// time: 22-9-7
// leetcode link: https://leetcode.cn/problems/power-of-three/

class Solution {
public:
    bool isPowerOfThree(int n) 
    {
        // if (n == 3 || n == 1)
        // {
        //     return true;
        // }
        // else if (n % 3 == 0 && n > 3)
        // {
        //     return isPowerOfThree(n / 3);
        // }
        // else 
        // {
        //     return false;
        // }

        while (n && n % 3 == 0)
        {
            n /= 3;
        }
        return n == 1;
        // return n > 0 && 1162261467 % n == 0;
    }
};