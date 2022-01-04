// Implementation of Queue using two stacks
#include <bits/stdc++.h>
using namespace std;

struct method1 // this method makes enqueue operation costlier with time complexity of O(n)
{
    stack<int> s1, s2;
    void enqueue(int x)
    {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }
    int dequeue()
    {
        if (s1.empty())
        {
            cout << "Queue is empty.";
            exit(0);
        }
        int element = s1.top();
        s1.pop();
        return element;
    }
};

struct method2 // this method makes dequeue operation costly
{
    stack<int> s1, s2;
    void enqueue(int x)
    {
        s1.push(x);
    }
    int dequeue()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "Queue is empty.";
            exit(0);
        }
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int element = s2.top();
        s2.pop();
        return element;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    method1 m1;
    method2 m2;
    
    m1.enqueue(1);
    m1.enqueue(2);
    m1.enqueue(3);
    cout << m1.dequeue();
    m1.enqueue(4);
    m1.enqueue(5);
    cout << m1.dequeue();

    m2.enqueue(1);
    m2.enqueue(2);
    m2.enqueue(3);
    cout << m2.dequeue();
    m2.enqueue(4);
    m2.enqueue(5);
    cout << m2.dequeue();
}