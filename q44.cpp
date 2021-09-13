#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    int max;
    set<char> s1;
    int low = 0;
    int high = 0;
    for (int i = 1; i <= s.size(); ++i)
    {
        if (s1.find(s[i]) == s1.end())
        {
            high++;
            s1.insert(s[i]);
        }
        else
        {
            low++;
        }
    }
    cout << high << " " << low << endl;
    max = high - low;
    return max;
}

int main()
{
    string s;
    cin >> s;
    cout << lengthOfLongestSubstring(s);
}