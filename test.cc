#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <memory.h>
#include <queue>

using namespace std;
class Solution {
public:
    std::vector<int> sign;
    std::vector<int> size;
    int max = 100000;
    void helper(int curr_sign, int curr_size, int idx, vector<string>& arr)
    {
        if (idx == arr.size() && curr_size > max)
        {
            max = curr_size;
        }
        if (curr_sign ^ sign[idx] == curr_sign | sign[idx])
        {
            helper(curr_sign ^ sign[idx], curr_size + size[idx], idx + 1, arr);
        }
        helper(curr_sign, curr_size, idx + 1, arr);
    }

    int maxLength(vector<string>& arr) {
        sign.reserve(arr.size());
        size.reserve(arr.size());
        for (const string& str : arr)
        {
            int s = 0;
            for (char ch : str)
            {
                s += (1 << ch - 'a');
            }
            sign.push_back(s);
            size.push_back(str.size());
        }
        helper(0, 0, 0, arr);
        return max;
    }
};
int main()
{
    Solution sol;
    std::vector<string> vec = {"un","iq","ue"};
    sol.maxLength(vec);
    return 0;
}