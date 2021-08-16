#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<int, multiset<string>> m;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        int x;
        cin >> x;
        m[-1 * x].insert(s);
    }
    for (auto &v : m)
    {
        auto sec = v.second;
        auto fir = v.first;
        for (auto i : sec)
            cout << i << " " << fir * -1 << endl;
    }
}