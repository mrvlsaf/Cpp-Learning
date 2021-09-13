#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string &s, int low, int high)
{
    while (low > 0 || high < s.size())
    {
        if (s[low] != s[high])
            return 0;
        low--;
        high++;
    }
    return 1;
}

int isPlaindrome(string s)
{
    if (s.size() == 0)
        return 0;
    if (s.size() == 1)
        return 1;
    int low = 0, high = 0;
    if (s.size() % 2 == 0)
    {
        low = (s.size() / 2) - 1;
        high = s.size() / 2;
    }
    else
    {
        low = s.size() / 2;
        high = low;
    }
    cout << checkPalindrome(s, low, high);
}

int main()
{
    string s;
    cin >> s;
    isPlaindrome(s);
}