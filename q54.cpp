#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cost = 11;
    int p = 3;
    bool loop = true;
    int no_of_item = 0;
    if (cost < 10)
        cout << 0;
    int z = 2;
    while (loop)
    {
        int x = (cost / 10) * 10;
        if (x + p < cost)
        {
            no_of_item++;
            cost *= z;
            z++;
        }
        else
        {
            no_of_item++;
            loop = false;
        }
    }
    cout << no_of_item;
}