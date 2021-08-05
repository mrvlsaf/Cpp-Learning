#include <bits/stdc++.h>
using namespace std;

int moduloFunction(int x)
{
    long long int res = 0;
    for (long long int i = 1; i <= x; i++)
    {
        res = res + (x % i);
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int l, r, sum = 0;
    cin >> l >> r;
    if (l == r)
    {
        cout << l;
    }
    else
    {
        for (long long int i = l; i < r; i++)
        {
            if (moduloFunction(i) == moduloFunction(i + 1))
            {
                sum = sum + i + (i + 1);
            }
        }
        cout << sum;
    }
}