#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0;
    while (i < n)
    {
        if (s[i] == 'a')
        {
            if (i != 0 && s[i - 1] != 'b' && s[i - 1] != 'a')
            {
                s[i - 1] = 'a';
                i--;
            }
            else if (s[i + 1] != 'b' && s[i + 1] != 'a')
            {
                s[i + 1] = 'a';
                i++;
            }
            else
                i++;
        }
        else
            i++;
    }
    cout << count(s.begin(), s.end(), 'a') << endl;
}