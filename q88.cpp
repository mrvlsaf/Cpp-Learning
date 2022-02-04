#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> arr = {9, 9, 21, 21, 1, 1, 1};
    int k = 2;
    int x = k;
    int n = arr.size();
    map<int, int> m1;
    for (int i = 0; i < n; ++i)
        m1[arr[i]]++;
    map<int, int>::iterator it;
    // for (it = m1.begin(); it != m1.end(); ++it)
    //     cout << it->first << " " << it->second << "\n";

    vector<pair<int, int>> v;
    for (it = m1.begin(); it != m1.end(); ++it)
        v.push_back(make_pair(it->second, it->first));

    sort(v.rbegin(), v.rend());

    vector<int> ans;
    while (k != 0)
    {
        ans.push_back(v[x - k].second);
        k--;
    }
}