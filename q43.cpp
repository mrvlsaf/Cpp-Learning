#include <bits/stdc++.h>
using namespace std;

int maxCount(int m, int n, vector<vector<int>> &ops)
{
}

int main()
{
    vector<vector<int>> ops = {{0, 0}};
    int count = 0, x;
    count = ops[0][0] * ops[0][1];
    x = ops[0][0];
    int i = 0, j = 0;
    for (int i = 1; i < ops.size(); ++i)
    {
        if (ops[i][0] < x)
        {
            count = ops[i][0] * ops[i][0];
            x = ops[i][0];
        }
    }
    cout << count;
}