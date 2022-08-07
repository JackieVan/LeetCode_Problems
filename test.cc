#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <memory.h>

using namespace std;

class Solution {
public:
    string maxValue(string n, int x) {
        string ans = n;
        int s = n[0] == '-' ? 1 : 0;
        for (int i = s; i != n.size(); ++i)
        {
            if (n[0] != '-' && x > (int)n[i])
            {
                ans.insert(i, to_string(x));
                break;
            }
            else if (n[0] == '-' && x < (int)n[i])
            {
                ans.insert(i, to_string(x));
                break;
            }
        }
        if (ans.size() == n.size())
        {
            ans += to_string(x);
        }
        return ans;
    }
};

int main()
{
    Solution sol;
    string n = "-13";
    auto res = sol.maxValue(n, 2);
    std::cout << res << "\n";
    return 0;
}