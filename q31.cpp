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
        int n, k;
        cin >> n;
        vector<long long> a1(n);
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a1[i];
            m[a1[i]]++;
        }
        cin >> k;
        vector<long long> a2(k);
        for (int i = 0; i < k; i++)
            cin >> a2[i];
        vector<long long> result;
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < m[a2[i]]; j++)
            {
                result.push_back(a2[i]);
            }
            m[a2[i]] = 0;
        }
        for (auto val : m)
        {
            for (int i = 0; i < val.second; i++)
                result.push_back(val.first);
        }
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }
}