#include <bits/stdc++.h>
using namespace std;

int countNumbersWith9(int n)
{
    if (n < 9)
        return 0;

    int d = log10(n);

    int *a = new int[d + 1];
    a[0] = 0, a[1] = 1;
    for (int i = 2; i <= d; i++)
        a[i] = a[i - 1] * 9 + ceil(pow(10, i - 1));

    int p = ceil(pow(10, d));
    int msd = n / p;

    if (msd == 9)
        return (msd)*a[d] + (n % p) + 1;

    if (msd > 9)
        return (msd - 1) * a[d] + p + countNumbersWith9(n % p);

    return (msd)*a[d] + countNumbersWith9(n % p);
}

int main()
{
    int n = 271;
    cout << countNumbersWith9(n) << endl;
    return 0;
}