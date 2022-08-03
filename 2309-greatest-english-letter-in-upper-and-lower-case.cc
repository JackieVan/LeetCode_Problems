// author: Jackie
// time: 22-8-3
// leetcode link: https://leetcode.cn/problems/greatest-english-letter-in-upper-and-lower-case/solution/

class Solution {
public:
    string greatestLetter(string s) {
        std::set<int> appered;
        char best = '\0';
        for (char ch : s)
        {
            if (ch <= 'Z' && appered.count(int(ch) + 32) == 1 && ch > best)
            {
                best = ch;
            }
            else if (ch >= 'a' && appered.count(int(ch) - 32) == 1 && (int)ch > (int)best + 32)
            {
                best = char(ch - 32);
            }
            else 
            {
                appered.insert((int)ch);
            }
        }
        return best == '\0' ? "" : string(1, best);
    }
};