#include <bits/stdc++.h>
using namespace std;

string convert(string s, int rows)
{
    int n = s.size();
    if (rows == 1)
        return s;
    string ans;
    vector<string> v(rows);
    for (int i = 0; i < n; i += 2 * rows - 2)
    {
        for (int k = 0; k < rows; k++)
            if (i + k < n)
                v[k].push_back(s[i + k]);
        for (int k = 2 * rows - 3; k >= rows; k--)
            if (i + k < n)
                v[2 * rows - 2 - k].push_back(s[i + k]);
    }
    for (int i = 0; i < v.size(); i++)
        ans += v[i];
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << convert("PAYPALISHIRING", 4);
}