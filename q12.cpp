#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int result = 0;
    bool flagPrime = true;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (islower(s[i]))
            result = result + int(toupper(s[i]));
        else if (isupper(s[i]))
            result = result - int(tolower(s[i]));
    }
    result = abs(result);
    for (int i = 2; i <= sqrt(result); i++)
    {
        if (result % i == 0)
        {
            cout << 0;
            flagPrime = false;
            break;
        }
    }
    if (flagPrime)
        cout << 1;
}