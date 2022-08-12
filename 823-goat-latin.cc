// author: Jackie
// time: 22-8-10
// leetcode link: https://leetcode.cn/problems/goat-latin/submissions/

class Solution {
public:
    string toGoatLatin(string sentence) {
        std::set<char> vowel = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        stringstream ss(sentence);
        string ans, tmp;
        string tail = "a";
        while (ss >> tmp)
        {
            if (vowel.count(tmp[0]) == 1)
            {
                tmp = tmp + "ma";
            }
            else 
            {
                tmp.append(1, tmp[0]);
                string t;
                for (int i = 1; i != tmp.size(); ++i)
                {
                    t.append(1, tmp[i]);
                }
                tmp = t + "ma";
            }
            ans += tmp + tail + " ";
            tail += "a";
        }
        return string(ans, 0, ans.size() -1);
    }
};