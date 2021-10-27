#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    while (q--)
    {
        long long p;
        cin >> p;
        cout << (p % 2 == 0 ? p / 2 : p / 2 + 1) << "\n";
    }
}