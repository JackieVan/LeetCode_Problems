#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <memory.h>

using namespace std;


class Solution {
public:
    int nthUglyNumber(int n) {
        std::vector<int> num(n+1, 0);
        num[1] = 1;
        int p2, p3, p5;
        p2 = p3 = p5 = 1;
        for (int i = 2; i != n+1; ++i)
        {
            int num2 = num[p2] * 2;
            int num3 = num[p3] * 3;
            int num5 = num[p5] * 5;
            num[i] = std::min(std::min(num2, num3), num5);
            if (num[i] == num2)
            {
                ++p2;
            }
            if (num[i] == num3)
            {
                ++p3;
            }
            if (num[i] == num5)
            {
                ++p5;
            }
        }
        return num[n];
    }
};


int main()
{
    Solution sol;
    char ch = 'a';
    // std::cout << sol.nthUglyNumber(10) << "\n";
    // std::cout << (int)ch << "\n";
    std::string str = "abc";
    str.erase(str.find("b"));
    std::cout << str << "\n";
    return 0;
}