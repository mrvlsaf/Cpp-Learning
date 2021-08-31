#include <bits/stdc++.h>
using namespace std;

vector<int> findIndex(vector<int> &v, int target)
{
    int low, mid, high;
    low = 0;
    high = v.size() - 1;
    vector<int> ans;
    while (high - low > 1)
    {
        mid = (high + low) / 2;
        if (target > v[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    if (target == v[low] || target == v[high])
    {
        int j;
        target == v[low] ? j = low + 1 : j = high + 1;
        while (v[j] != target)
        {
            j++;
        }
        if (target == v[low])
            ans.push_back(low);
        else
            ans.push_back(high);
        ans.push_back(j);
        return ans;
    }
    else
    {
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int target;
    cin >> target;
    vector<int> ans = findIndex(v, target);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}