#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <memory.h>
#include <set>
#include <queue>
#include <algorithm>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        int idx1 = 0;
        int idx2 = 0;
        string ans = 0;
        while (idx1 != word1.size() || idx2 != word2.size())
        {
            if (idx1 != word1.size())
            {
                ans.append(1, word1[idx1++]);
            }
            if (idx2 != word2.size())
            {
                ans.append(1, word2[idx2++]);
            }
        }
        return ans;
    }
};


int main()
{
    Solution sol;
    std::string w1 = "abc";
    std::string w2 = "def";
    std::cout << sol.mergeAlternately(w1, w2) << "\n";
    return 0;
}