#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> m;
    m[5] = "Devraj";
    m[50] = "Singh";
    m[1] = "Computer Science";
    m.insert({6, "Btech"});
    m.insert({0, "zeroth key value"});
    // map<int, string>::iterator it;
    // for (it = m.begin(); it != m.end(); it++)
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }
    // for (auto it : m)
    // {
    //     cout << it.second;
    // }
    
    cout<< (*(m.find(2))).second;
}