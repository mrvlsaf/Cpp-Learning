#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N = 5, K = 3;
    vector<vector<int>> mat;
    for (int i = 0; i < N; ++i)
    {
        vector<int> v;
        for (int j = 0; j < N; ++j)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        mat.push_back(v);
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j < N; j++)
        {
            mat[i][j] += mat[i][j - 1];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j < N; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}