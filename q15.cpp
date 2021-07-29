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
        long long int x = 0;
        cin >> n;
        string s;
        cin >> s;
        int j = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            x = x + (powl(2, i) + 0.5) * (int(s[j]) - 48);
            j++;
        }
        cout << x << endl;
    }
}