#include <bits/stdc++.h>
using namespace std;

const int N = 1e2 + 10;
bool visisted[N][N];
int perimeter = 0;

void dfs(int i, int j, vector<vector<int>> &grid)
{
    if (visisted[i][j])
        return;
    int n = grid.size();
    int m = grid[0].size();
    if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == 0)
    {
        perimeter++;
        return;
    }
    visisted[i][j] = true;
    dfs(i + 1, j, grid);
    dfs(i - 1, j, grid);
    dfs(i, j + 1, grid);
    dfs(i, j - 1, grid);
}

int islandPerimeter(vector<vector<int>> &grid)
{
    for (int i = 0; i < grid.size(); ++i)
    {
        for (int j = 0; j < grid[0].size(); ++j)
        {
            if (grid[i][j])
                dfs(i, j, grid);
            break;
        }
        if (grid[i][j])
            break;
    }
    return perimeter;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}