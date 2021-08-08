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
        long long int x, candy = 0;
        multiset<long long> s;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            s.insert(x);
        }
        if (k == 0)
            cout << 0 << endl;
        else
        {
            for (int i = k; i > 0; i--)
            {
                auto it = (--s.end());
                candy += *it;
                s.erase(it);
                s.insert(*it / 2);
            }
            cout << candy << endl;
            // complexity exceeding O(n)
            // for (int i = k; i > 0; i--)
            // {
            //     int max = *max_element(a, a + n);
            //     int x = distance(a, max_element(a, a + n));
            //     candy = candy + max;
            //     a[x] = a[x] / 2;
            //     if (k == 0)
            //         break;
            // }
            // cout << candy << endl;
        }
    }
}