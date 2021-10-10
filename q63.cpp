#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *left;
    Node *right;
};

int minElement(Node *root)
{
    if (root->left == NULL)
        return root->val;
    else
        return minElement(root->left);
}

int maxElement(Node *root)
{
    if (root->right == NULL)
        return root->val;
    else
        return maxElement(root->right);
}

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
    root = insert(root, 1);
    root = insert(root, 2000);
    root = insert(root, 4);
    cout << "Enter value to search\n";
    int value;
    cin >> value;
    search(root, value) ? cout << "Value Found" : cout << "Value Not Found";
    cout << minElement(root);
    cout << maxElement(root);
}