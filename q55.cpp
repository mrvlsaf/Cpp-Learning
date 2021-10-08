#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;
};

Node *head = NULL;
int size = 0;

void reverseUsingRecursion(Node *p)
{
    if (p == NULL)
        return;
    reverseUsingRecursion(p->next);
    cout << p->val << " ";
}

void reverseLinkedList()
{
    Node *ptr = head;
    Node *ptr1 = NULL;
    Node *temp;
    while (ptr)
    {
        temp = ptr->next;
        ptr->next = ptr1;
        ptr1 = ptr;
        ptr = temp;
    }
    head = ptr1;
}

void deleteByPosition(int pos)
{
    Node *ptr = head;
    for (int i = 0; i < pos - 2; ++i)
    {
        ptr = ptr->next;
    }
    if (pos == size)
        ptr->next = NULL;
    else if (pos == 1)
    {
        head = ptr->next;
        ptr->next = NULL;
    }
    else
        ptr->next = ptr->next->next;
}

void deleteByValue(int data)
{
    Node *ptr = head;
    if (ptr->val == data)
    {
        deleteByPosition(1);
    }
    else
    {
        ptr = ptr->next;
        for (int i = 1; i < size - 1; ++i)
        {
            if (ptr->val == data)
            {
                deleteByPosition(i + 1);
                break;
            }
            if (i == size - 2)
            {
                ptr->next = NULL;
                break;
            }
            ptr = ptr->next;
        }
    }
}

void print()
{
    Node *ptr = head;
    while (ptr)
    {
        cout << ptr->val << " ";
        size++;
        ptr = ptr->next;
    }
    cout << "\n";
}

void insert(int data, int pos)
{
    Node *newNode = new Node();
    newNode->val = data;
    if (pos == 1)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        Node *ptr = head;
        for (int i = 0; i < pos - 2; ++i)
        {
            ptr = ptr->next;
        }
        newNode->next = ptr->next;
        ptr->next = newNode;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    insert(10, 1);
    insert(20, 2);
    insert(30, 3);
    insert(40, 4);
    print();
    // deleteByValue(40);
    // deleteByPosition(2);
    reverseLinkedList();
    print();
    reverseUsingRecursion(head); //print the val of LL in reverse order and not actually reverse the LL
}