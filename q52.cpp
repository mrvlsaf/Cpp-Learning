#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *link;
};

insertAtBeginning(int x, Node **head)
{
    Node *temp = new Node();
    temp->data = x;
    temp->link = *head;
    *head = temp;
}

insertAtParticularPosition(int &pos, int &value, Node *head)
{
    Node *temp = new Node();
    temp->data = value;
    Node *temp1 = head;
    for (int i = 1; i < pos - 1; ++i)
    {
        temp1 = temp1->link;
    }
    temp->link = temp1->link;
    temp1->link = temp;
}

printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->link;
    }
    cout << "\n";
}

int main()
{
    Node *head;
    int n;
    cout << "Enter the size of list: ";
    cin >> n;
    head = NULL;
    int x;
    for (int i = 0; i < n; ++i)
    {
        cout << "Enter data to be inserted in " << i << " node: " << endl;
        cin >> x;
        insertAtBeginning(x, &head);
    }
    printList(head);
    cout << "Enter the position(except 1) to be inserted and the value: ";
    int pos, value;
    cin >> pos >> value;
    insertAtParticularPosition(pos, value, head);
    printList(head);
    // (*temp).data = 5;
}