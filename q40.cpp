#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; //no. of workers
    cin >> n;
    vector<int> masks(n, 0);
    for (int i = 0; i < n; ++i)
    {
        int days;
        cin >> days;
        int mask = 0;
        for (int j = 0; j < days; ++j)
        {
            int day;
            cin >> day;
            mask = mask | (1 << day);
        }
        masks[i] = mask;
    }
    for (int i = 0; i < n; ++i)
    {
        cout << masks[i] << endl;
    }
    int max_days = 0;
    int person1, person2;
    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
        {
            int intersection = (masks[i] & masks[j]);
            int common_days = __builtin_popcount(intersection);
            if (common_days > max_days)
            {
                person1 = i+1;
                person2 = j+1;
            }
            max_days = max(max_days, common_days);
        }
    cout << person1 << " " << person2 << " " << max_days;
}