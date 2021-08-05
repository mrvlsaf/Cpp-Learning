#include <bits/stdc++.h>
using namespace std;

void printVector(vector<char> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // pair<int, char> pair1;
    // pair1 = {50, 'd'};
    // cout << pair1.first << " " << pair1.second;
    // vector<char> name;
    // for (int i = 0; i < 6; i++)
    // {
    //     char x;
    //     cin >> x;
    //     name.push_back(x);
    // }
    // vector<char> name2 = name; //O(n) just like array using loop
    // name2.push_back('m');
    // printVector(name);
    // printVector(name2);
    // vector<int> v = {10, 20, 30, 40, 50};
    // vector<int>::iterator it = v.begin();
    // cout << *it;
    vector<int> v = {1, 2, 3, 4, 5};
    for (auto i : v)
    {
        cout << i << endl;
    }
}