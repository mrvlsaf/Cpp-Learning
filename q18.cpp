#include <bits/stdc++.h>
using namespace std;

int moduloFunction (int x) {
    int res = 0;
    for (int i=1; i<=x; i++) {
        res = res + (x%i);
    }
    return res;
}

int main()
{
    long long int l, r, x;
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        x = moduloFunction(i);
        y = moduloFunction(i+1);
    }
}