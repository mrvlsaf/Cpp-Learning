// implementation of Stack using 2 Queues
#include <bits/stdc++.h>
using namespace std;

struct method1 // by making the push operation costly
{
    queue<int> q1, q2;

    void push(int x)
    {
        q2.push(x);
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> q = q1;
        q1 = q2;
        q2 = q;
    }

    int pop()
    {
        if (q1.empty())
        {
            cout << "Stack is empty.";
            exit(0);
        }
        int element = q1.front();
        return element;
    }
};

struct method2 // by making pop operation costly
{
    queue<int> q1, q2;
    void push(int x)
    {
        q1.push(x);
    }

    int pop()
    {
        if (q1.empty())
        {
            cout << "Stack is empty.";
            exit(0);
        }
        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int element = q1.front();
        q1.pop();
        queue<int> q = q1;
        q1 = q2;
        q2 = q;
        return element;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    method1 m1;
    method2 m2;
    // m1.push(1);
    // m1.push(2);
    // m1.push(3);
    // cout << m1.pop();

    m2.push(1);
    m2.push(2);
    m2.push(3);
    cout << m2.pop();
    m2.push(4);
    m2.push(5);
    cout << m2.pop();
}