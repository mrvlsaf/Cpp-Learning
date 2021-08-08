#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, char> m;
    for (int i = 0; i < s.size(); i = i + 2)
    {
        m[s[i]] = s[i + 1];
    }
    for (auto &it : m)
    {
        cout << it.first << " " << it.second << endl;
    }
}