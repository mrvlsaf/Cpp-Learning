#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> data = {{'{', -3}, {'[', -2}, {'(', -1}, {')', 1}, {']', 2}, {'}', 3}};
string isBalanced(string s)
{
    stack<char> stak;
    for (auto value : s)
    {
        if (data[value] < 0)
        {
            stak.push(value);
        }
        else
        {
            if (stak.empty())
                return "NO";
            else
            {
                char top = stak.top();
                if (data[top] + data[value] != 0)
                    return "NO";
                else
                    stak.pop();
            }
        }
    }
    if (!stak.empty())
        return "NO";
    else
        return "YES";
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        cout << isBalanced(s) << endl;
    }
}