#include <bits/stdc++.h>
using namespace std;

int findIndex(vector<int> &v, int target)
{
    int low, mid, high;
    low = 0;
    high = v.size() - 1;
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
    if (target <= v[low])
    {
        return low;
    }
    else if (target <= v[high])
    {
        return high;
    }
    else if (target > v[high])
    {
        return high + 1;
    }
    else
        return -1;
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
    cout << findIndex(v, target);
}