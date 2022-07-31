// author: Jackie
// time: 22-7-31
// leetcode link: https://leetcode.cn/problems/count-operations-to-obtain-zero/submissions/

class Solution {
public:
    int countOperations(int num1, int num2) {
        int step = 0;
        while (num1 != 0 && num2 != 0)
        {
            if (num1 >= num2)
            {
                num1 -= num2;
            }
            else
            {
                num2 -= num1;
            }
            ++step;
        }
        return step;
    }
};