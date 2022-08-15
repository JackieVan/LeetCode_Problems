#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <memory.h>
#include <queue>

using namespace std;


int main()
{
    int n = 2;
   int one_num = 0;
       if (n < 0)
       {
           return false;
       }
       while (n != 0)
       {
           one_num += (n & 1);
           n >>= 1;
       std::cout << one_num << "\n";
       }
       if (one_num != 1)
       {
           return false;
       }
        bool res = (n | 0x55555555) == 0x55555555;
    std::cout << res << "\n";
    return 0;
}