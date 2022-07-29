#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
private:
    int max = 0;
    void dfs(vector<vector<int>>& grid, int i, int j, int gold)
    {
        int record = grid[i][j];
        gold += record;
        if (gold > max)
        {
            max = gold;
        }
        grid[i][j] = 0;
        // search four directions
        // 1. up
        if ( i - 1 > -1 && grid[i-1][j] > 0)
        {
            dfs(grid, i - 1, j, gold);
        }
        // 2. down
        if ( i + 1 < grid.size() && grid[i+1][j] > 0)
        {
            dfs(grid, i + 1, j, gold);
        }
        // 3. right
        if ( j + 1 < grid[0].size() && grid[i][j+1] > 0)
        {
            dfs(grid, i, j + 1, gold);
        }
        // 4. left
        if ( j - 1 > -1  && grid[i][j-1] > 0)
        {
            dfs(grid, i, j - 1, gold);
        }
        grid[i][j] = record;
    }

public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int raw_num = grid.size();
        int col_num = grid[0].size();
        int max = 0;
        for (int i = 0; i != raw_num; ++i)
        for (int j = 0; j != col_num; ++j)
        {
            int gold = 0;
            if (grid[i][j] > 0)
            {
                dfs(grid, i, j, gold);
            }
        }
        return max;
    }

};


int main()
{
  std::vector<vector<int>> gird = { {0, 6, 0}, { 5, 8, 7 }, {0, 9, 0} };
  Solution sol;
  std::cout << sol.getMaximumGold(gird) << "\n";
  return 0;
}