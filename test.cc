#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <memory.h>
#include <set>
#include <queue>
#include <algorithm>
#include <stack>

using namespace std;

bool isValid(string s) 
    {
        std::map<char, char> map = { {')', '('}, {'}', '{'}, {']', '['} };
        std::stack<char> stack;
        for (char ch : s)
        {
            if (stack.size() != 0 && stack.top() == map[ch])
            {
                stack.pop();
            }
            stack.push(ch);
        }
        return stack.size() == 0;
    }


int main()
{
    std::string s = "()";
    std::cout << isValid(s) << "\n";
    return 0;
}
