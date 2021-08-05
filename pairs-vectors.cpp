#include <bits/stdc++.h>
using namespace std;

int main()
{
    // pair<int, char> pair1;
    // pair1 = {50, 'd'};
    // cout << pair1.first << " " << pair1.second;
    vector<char> name;
    for (int i = 0; i < 11; i++)
    {
        char x;
        cin >> x;
        name.push_back(x);
    }
    for (int i = 0; i < name.size(); i++)
    {
        cout << name[i] << " ";
    }
}