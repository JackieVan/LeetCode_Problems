// author: Jackie
// time: 22-8-13
// leetcode link: https://leetcode.cn/problems/maximum-length-of-a-concatenated-string-with-unique-characters/solution/

class Solution {
public:
int countOnes(unsigned uWord) 
{
  uWord = (uWord & 0x55555555) + ((uWord>>1) & 0x55555555);
  uWord = (uWord & 0x33333333) + ((uWord>>2) & 0x33333333);
  uWord = (uWord & 0x0F0F0F0F) + ((uWord>>4) & 0x0F0F0F0F);
  uWord = (uWord & 0x00FF00FF) + ((uWord>>8) & 0x00FF00FF);
  return  (uWord & 0x0000FFFF) + (uWord>>16);
  // int res = 0;
  // while (uWord != 0)
  // {
  //   ++res;
  //   uWord &= uWord - 1;
  // }
  // return res;
}
    std::vector<int> sign;
    std::vector<int> size;
    std::set<int> skip_me;
    int max = 0;
    void helper(int curr_sign, int curr_size, int idx, vector<string>& arr)
    {
        if (idx == arr.size())
        {
            max = max > curr_size ? max : curr_size;
            return;
        }
        if (skip_me.count(idx) == 1)
        {
            helper(curr_sign, curr_size, idx + 1, arr);
        }
        else {
            if ((curr_sign ^ sign[idx]) == (curr_sign | sign[idx]))
            {
                helper(curr_sign ^ sign[idx], curr_size + size[idx], idx + 1, arr);
            }
            helper(curr_sign, curr_size, idx + 1, arr);
        }
    }

    int maxLength(vector<string>& arr) {
        sign.reserve(arr.size());
        size.reserve(arr.size());
        int idx = 0;
        for (const string& str : arr)
        {
            int s = 0;
            for (char ch : str)
            {
                s += (1 << ch - 'a');
            }
            sign.push_back(s);
            size.push_back(str.size());
            if (countOnes(s) != str.size())
            {
                skip_me.insert(idx);
            }
            ++idx;
        }
        helper(0, 0, 0, arr);
        return max;
    }
};