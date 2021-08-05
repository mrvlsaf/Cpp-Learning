//pre computation techniques (Hashing)
#include <bits/stdc++.h>
using namespace std;
int a[26], b[26];

int main()
{
    string s, t;
    cin >> s >> t;
    int flag = 0;
    string result;
    if (s.size() != t.size())
    {
        result = "false";
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            a[((int)s[i] - 97)]++;
            b[((int)t[i] - 97)]++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (a[i] != b[i])
            {
                flag = 0;
                result = "false";
                break;
            }
            else
            {
                flag = 1;
            }
        }
        if (flag == 1)
            result = "true";
    }
    cout << result;
}