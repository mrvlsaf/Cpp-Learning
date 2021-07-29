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
        int arr[n];
        long long int prod = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            prod = prod * arr[i];
        }
        cout << prod;
        // if (prod % 10 == 2 || prod % 10 == 3 || prod % 10 == 5)
        //     cout << "YES" << endl;
        // else
        //     cout << "NO" << endl;
    }
}