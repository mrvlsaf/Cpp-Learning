// hackerrank - Unlock the Door

#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;
const int p = 1e5 + 10;
int fact[p];

int binExp(int a, int b, int m)
{
    int result = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            result = (result * 1LL * a) % m;
        }
        a = (a * 1LL * a) % m;
        b >>= 1;
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fact[0] = 1;
    for (int i = 1; i < p; ++i)
    {
        fact[i] = (fact[i - 1] * 1LL * i) % M;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ans = fact[n];
        ans = (ans * 1LL * fact[k]) % M;
        int denom = (fact[n] * 1LL * fact[k - n]) % M;
        ans = (ans * 1LL * binExp(denom, M - 2, M)) % M;
        cout << ans << endl;
    }
}