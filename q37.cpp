#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (v.size() == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            ans[0] = v[0];
            for (int i = 1; i < n; i++)
            {
                if (v[i] < v[i - 1])
                {
                    ans[i] = v[i];
                    int k = 2;
                    while (ans[i] < ans[i - 1])
                    {
                        ans[i] = v[i] * k;
                        k++;
                    }
                }
                else
                {
                    ans[i] = v[i];
                }
            }
            for (int i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
}