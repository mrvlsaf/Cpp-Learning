#include <bits/stdc++.h>
using namespace std;

void dfs(int i, int j, int currentColor, int newColor, vector<vector<int>> &image)
{
    int n = image.size();
    int m = image[0].size();
    if (i < 0 || j < 0)
        return;
    if (i >= n || j >= m)
        return;
    if (image[i][j] != currentColor)
        return;
    image[i][j] = newColor;
    dfs(i - 1, j, currentColor, newColor, image);
    dfs(i + 1, j, currentColor, newColor, image);
    dfs(i, j - 1, currentColor, newColor, image);
    dfs(i, j + 1, currentColor, newColor, image);
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
{
    int currentColor = image[sr][sc];
    if (currentColor = !newColor)
        dfs(sr, sc, currentColor, newColor, image);
    return image;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}