#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v = {1, 2, 3, 4, 5};
    int key = 3;
    int n = v.size();
    vector<int> b(n);

    for (int i = 0; i < n; ++i)
    {
        i + key < n ? b[i + key] = v[i] : b[(i + key) - n] = v[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cout << b[i] << " ";
    }
}