#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a1[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a1[i];
        }
        int a2[n];
        a2[0] = a1[0];
        for (int i = 0; i < n - 1; i++)
        {
            if (a1[i] == 1)
            {
                a2[i + 1] = a2[i] + 1;
            }
            else if (a1[i] == 0)
            {
                a2[i + 1] = a2[i];
            }
            else
            {
                a2[i + 1] = a2[i] - 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a2[i] << " ";
        }
    }
}