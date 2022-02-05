#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>> arr;
    for (int i = 0; i < 6; ++i)
    {
        vector<int> v;
        for (int j = 0; j < 6; ++j)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        arr.push_back(v);
    }
    int a[4][4];
    int k = 0, l = 0;
    for (int i = 1; i < 5; ++i)
    {
        for (int j = 1; j < 5; ++j)
        {
            int x = arr[i - 1][j - 1] + arr[i - 1][j] + arr[i - 1][j + 1] + arr[i][j] + arr[i + 1][j] + arr[i + 1][j - 1] + arr[i + 1][j + 1];
            a[i - 1][j - 1] = x;
        }
    }
    int ans = a[0][0];
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            // cout << a[i][j] << " ";
            ans = max(ans, a[i][j]);
        }
        // cout << "\n";
    }
    cout << ans;
}