#include <bits/stdc++.h>
using namespace std;

bool comparator(pair<string, int> a, pair<string, int> b)
{
    if (a.second != b.second)
        return a.second > b.second;
    else
        return a.first < b.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<pair<string, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        string s;
        int marks;
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end(), comparator);
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}