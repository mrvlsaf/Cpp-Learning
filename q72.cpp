#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int adjmtrx[n][n] = {0};
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        adjmtrx[x][y] = 1;
        adjmtrx[y][x] = 1;
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << adjmtrx[i][j] << " ";
        cout << "\n";
    }
}