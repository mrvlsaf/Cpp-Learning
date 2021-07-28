#include <bits/stdc++.h>
using namespace std;

// int main () {
//     int t;
//     cin>>t;
//     cin.ignore(); //it will ignore the \n
//     while (t--) {
//         string s;
//         getline(cin, s);
//         cout<<s<<endl;
//     }
//     return 0;
// }

//check if string is palindrome

int main()
{
    string s;
    cin >> s;
    int flag = 0;
    for (int i = 0; i < s.size() / 2; i++)
    {
        s[i] == s[s.size() - i - 1] ? flag = 1 : flag = 0;
    }
    flag == 1 || s.size() == 1 ? cout << "YES" : cout << "NO";
    return 0;
}