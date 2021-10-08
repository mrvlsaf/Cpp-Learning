#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *prev;
    int data;
    Node *next;
};

Node *head = NULL;

void printList()
{
    Node *ptr = head;
    while (ptr)
    {
        cout << ptr->data << " ";
    }
    cout << "\n";
}

Node *getNewNode(int x)
{
    Node *newNode = new Node();
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertNode(int x, int pos)
{
    Node *newnode = getNewNode(x);
    Node *ptr = head;
    if (pos == 1)
    {
        newnode->next = head;
        head = newnode->prev;
    }
    // else
    // {
    //     while (pos)
    //     {
    //         ptr = ptr->next;
    //         pos--;
    //     }
    //     newnode->next = ptr->next;
    //     newnode->prev = ptr;
    // }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    insertNode(5, 1);
    // insertNode(10, 2);
    // insertNode(15, 3);
    // insertNode(20, 4);
    // insertNode(25, 5);
    printList();
}