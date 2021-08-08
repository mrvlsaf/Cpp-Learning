#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    map<string, int> m;
    int type, value;
    string name;
    while (q--)
    {
        cin >> type;
        if (type == 1)
        {
            cin >> name >> value;
            m[name] = m[name] + value;
        }
        else if (type == 2)
        {
            cin >> name;
            m.erase(name);
        }
        else
        {
            cin >> name;
            cout << m[name] << endl;
        }
    }
}