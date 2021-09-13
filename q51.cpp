#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s = "(1+(4+5+2)-3)+(6+8)";
    int p = 0;
    string a;
    for (int i = 0; i < s.size(); ++i)
    {
        switch (s[i])
        {
        case ' ':
            continue;
        case '(':
        {
            a[p] = s[i];
            p++;
        }
        case ')':
        {
            a[p] = s[i];
            p++;
        }
        case '+':{
            if (isdigit(s[i-1]) && isdigit(s[i+1])) {
                a[p] = 
            }
        }
        }
    }
}