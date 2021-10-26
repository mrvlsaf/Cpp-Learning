//hackerEarth - hacker decrypting messages

#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
int multiple[N];
int hsh[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        hsh[x]++;
    }
    for (int i = 1; i < N; ++i)
    {
        for (int j = i; j < N; j += i)
        {
            multiple[i] += hsh[j];
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int p, q;
        cin >> p >> q;
        long long lcm = p * 1LL * q / __gcd(p, q);
        int ans = multiple[p] + multiple[q];
        if (lcm < N)
            ans -= multiple[lcm];
        cout << ans << "\n";
    }
}