#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, p;
    cin >> m >> n >> p;
    int ans = 0;
    if (m > p && n > p)
    {
        ans = p;
        m = m - p;
        n = n - p;
        int c = m + n;
        ans += c / 3;
        cout << ans;
    }
}