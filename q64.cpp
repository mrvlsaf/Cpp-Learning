// Breadth First Traversel or Level Order Tranversel

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *left;
    Node *right;
};

void print(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *ptr = q.front();
        cout << ptr->val << " ";
        if (ptr->left != NULL)
            q.push(ptr->left);
        if (ptr->right != NULL)
            q.push(ptr->right);
        q.pop();
    }
}

Node *getNewNode(int x)
{
    Node *temp = new Node();
    temp->val = x;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

Node *insert(Node *root, int x)
{
    if (root == NULL)
    {
        root = getNewNode(x);
    }
    else if (x <= root->val)
    {
        root->left = insert(root->left, x);
    }
    else
    {
        root->right = insert(root->right, x);
    }
    return root;
}

int main()
{
    Node *root = NULL;
    root = insert(root, 100);
    root = insert(root, 50);
    root = insert(root, 25);
    root = insert(root, 75);
    root = insert(root, 20);
    root = insert(root, 200);
    root = insert(root, 250);
    root = insert(root, 150);
    print(root);
}