#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     string s1, s2;
    //     int count = 0;
    //     cin >> s1 >> s2;
    //     for (int i = 0; i < s2.size(); i++)
    //     {
    //         for (int j = 0; j < s1.size(); j++)
    //         {
    //             if (s2[i] == s1[j])
    //             {
    //                 count++;
    //                 break;
    //             }
    //         }
    //     }
    //     cout<<count<<endl;
    // }ṇ

    string s1, s2;
    cin>>s1>>s2;
    for (int i=0; i< s2.size(); i++) {
        s1.erase(remove(s1.begin(), s1.end(), s2[i]), s1.end());
    }
    cout<<s1;
    return 0;
}