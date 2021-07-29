#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b)
{
    int m = max(a, b);
    do
    {
        if (m % a == 0 && m % b == 0)
        {
            return m;
            break;
        }
        else
            ++m;
    } while (true);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, step;
    cin >> a >> b >> c;
    int arr[c];
    int i = 0;
    int p = min(a, b);
    while (i < c)
    {
        if (p % a == 0 || p % b == 0)
        {
            arr[i] = p;
            i++;
        }
        p++;
    }
    if (arr[c - 1] % a == 0 && arr[c - 1] % b != 0)
        step = a;
    else if (arr[c - 1] % a == 0 && arr[c - 1] % b == 0)
        step = lcm(a, b);
    else
        step = b;
    while (arr[c - 1] != 0)
    {
        cout << arr[c - 1] << " ";
        arr[c - 1] = arr[c - 1] - step;
    }
    cout << 0;
}