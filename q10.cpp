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
        int count = 1;
        int a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        int x = a[0];
        for (int i = 1; i < n; ++i)
        {
            if (x >= a[i]){
                count++;
                x=a[i];
            }
        }
        cout << count << endl;
    }
    return 0;
}