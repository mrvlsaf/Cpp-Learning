#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> intervals(n);
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int x;
            cin >> x;
            intervals[i].push_back(x);
        }
    }
    if (n == 1)
        return intervals;

    ans.push_back(intervals[0]);
    for (int i = 1; i < n; i++)
    {
        int p = ans.size();
        if (ans[p - 1][1] >= intervals[i][0])
            ans[p - 1][1] = max(intervals[i][1], ans[p - 1][1]);
        else
            ans.push_back(intervals[i]);
    }
}