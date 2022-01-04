#include <bits/stdc++.h>
using namespace std;

int main()
{

    int count = 0;
    vector<int> v = {2, 5, 9, 2, 1, 4};
    int x = 4;
    for (int i = 0; i < v.size(); ++i)
    {
        if (i < v.size()-1 && abs(v[i] - v[i + 1]) <= x)
        {
            count++;
            i++;
        }
        else
            count++;
    }
    cout << count;
}