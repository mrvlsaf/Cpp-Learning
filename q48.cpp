#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int ans = arr[n - 1] * arr[n - 1];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        for (int i = n - 2; i > 0; --i)
        {
            if (n % 2 == 0)
            {
                if (i % 2 == 0)
                    ans -= arr[i] * arr[i];
                else
                    ans += arr[i] * arr[i];
            }
            else
            {
                if (i % 2 == 0)
                    ans += arr[i] * arr[i];
                else
                    ans -= arr[i] * arr[i];
            }
        }
        cout << ans;
    }
    return 0;
}