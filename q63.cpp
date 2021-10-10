#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *left;
    Node *right;
};

bool search(Node *root, int x)
{
    if (root == NULL)
        return false;
    else if (x == root->val)
        return true;
    else if (x <= root->val)
        return search(root->left, x);
    else
        return search(root->right, x);
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
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 5);
    cout << "Enter value to search\n";
    int value;
    cin >> value;
    search(root, value) ? cout << "Value Found" : cout << "Value Not Found";
}