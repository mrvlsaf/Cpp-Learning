#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s = "i";
    stack<string> st;
    string temp = "";
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '.')
        {
            st.push(temp);
            temp = "";
        }
        else
        {
            temp.push_back(s[i]);
        }
    }
    st.push(temp);

    string ans;
    while (!st.empty())
    {
        ans += st.top();
        ans += '.';
        st.pop();
    }
    ans.pop_back();
}