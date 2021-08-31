#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int positions[N];
int stalls, cows;

bool canPlaceCows(int dist)
{
    int lastIndex = -1;
    int cow_count = cows;
    for (int i = 0; i < stalls; i++)
    {
        if (positions[i] - lastIndex >= dist || lastIndex == -1)
        {
            cow_count--;
            lastIndex = positions[i];
        }
        if (cow_count == 0)
            break;
    }
    return cow_count == 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> stalls >> cows;
        for (int i = 0; i < stalls; i++)
        {
            cin >> positions[i];
        }
        sort(positions, positions + stalls);
        int low = 0, high = 1e9, mid;
        while (high - low > 1)
        {
            mid = (high + low) / 2;
            if (canPlaceCows(mid))
            {
                low = mid;
            }
            else
            {
                high = mid - 1;
            }
        }
        if (canPlaceCows(high))
            cout << high << endl;
        else
            cout << low << endl;
    }
}