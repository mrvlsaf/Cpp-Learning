#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    set<long long> s;
    while (q--)
    {
        int y;
        long long x;
        cin >> y >> x;
        if (y == 1)
        {
            s.insert(x);
        }
        else if (y == 2)
        {
            auto it = s.find(x);
            if (it != s.end())
                s.erase(it);
        }
        else if (y == 3)
        {
            auto it2 = s.find(x);
            if (it2 != s.end())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}