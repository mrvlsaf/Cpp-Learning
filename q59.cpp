// INFIX TO POSTFIX
// A+B*C-D*E => A+(B*C)-(D*E) => A+(BC*)-(DE*) => (ABC*+)-(DE*) => ABC*+DE*-

#include <bits/stdc++.h>
using namespace std;


//working on this fucntion
bool higherPrecedence(char op1, char op2)
{
    if ((op1 == '*' || op1 == '/') && (op2 == '+' || op2 == '-'))
        return true;
    if ((op1 == '+' || op1 == '-') && (op2 == '*' || op2 == '/'))
        return false;
    if (op1 == '-' && op2 == '+')
        return false;
}

string infixToPostfix(string exp)
{
    string ans;
    stack<char> stak;
    for (int i = 0; i < exp.size(); ++i)
    {
        if (exp[i] == '+' || exp[i] == '-' || exp[i] == '/' || exp[i] == '*')
        {
            if (stak.empty() || higherPrecedence(exp[i], stak.top()))
                stak.push(exp[i]);
            else
            {
                while (higherPrecedence(exp[i], stak.top()) == false || stak.empty() == false)
                {
                    ans.push_back(stak.top());
                    stak.pop();
                    cout << "running";
                }
                stak.push(exp[i]);
            }
        }
        else
            ans.push_back(exp[i]);
    }
    int p = stak.size();
    while (p--)
    {
        ans.push_back(stak.top());
        stak.pop();
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    cout << infixToPostfix(s);
}