#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
long long a[N];
int n;
long long m;

bool CanObtainWood(int height)
{
    long long wood = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= height)
            wood += (a[i] - height);
    }
    return wood >= m;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long low = 0, high = 1e9, mid;
    while (high - low > 1)
    {
        mid = (high + low) / 2;
        if (CanObtainWood(mid))
        {
            low = mid;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (CanObtainWood(high))
        cout << high << endl;
    else
        cout << low << endl;
}