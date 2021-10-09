// queue using Linked List

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;
};

Node *head = NULL;
Node *front = NULL;
Node *rear = NULL;

void printQueue()
{
    Node *ptr = head;
    while (ptr)
    {
        cout << ptr->val << " ";
        ptr = ptr->next;
    }
    cout << "\n";
}

void Enqueue(int x)
{
    Node *temp = new Node();
    temp->val = x;
    if (head == NULL)
    {
        head = temp;
        front = head;
        rear = head;
    }
    else
    {
        rear->next = temp;
        rear = rear->next;
    }
}

void Dequeue()
{
    if (head == NULL)
    {
        cout << "Queue is empty";
        return;
    }
    cout << "Deleted element is " << front->val << "\n";
    head = front->next;
    front = front->next;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Enqueue(5);
    Enqueue(10);
    Enqueue(15);
    Enqueue(20);
    Enqueue(25);
    Enqueue(30);
    printQueue();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();
    printQueue();
    // cout << front->val << " " << rear->val;
}