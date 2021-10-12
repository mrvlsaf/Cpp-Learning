//Searching and Deleting a node in BST

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *left;
    Node *right;
};

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
        root = getNewNode(x);
    else if (x <= root->val)
        root->left = insert(root->left, x);
    else
        root->right = insert(root->right, x);
    return root;
}

void inOrder(Node *root)
{
    if (root == NULL)
    {
        cout << "\n";
        return;
    }
    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
}

Node *findMax(Node *root)
{
    // while (root->right != NULL)
    //     root = root->right;
    // return root;
    if (root->right == NULL)
        return root;
    root->right = findMax(root->right);
}

Node *deleteNode(Node *root, int value)
{
    if (root == NULL)
        return root;
    else if (value < root->val)
        root->left = deleteNode(root->left, value);
    else if (value > root->val)
        root->right = deleteNode(root->right, value);
    else
    {
        // No Child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        // One Child
        else if (root->left == NULL)
        {
            Node *temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root;
            root = root->left;
            delete temp;
        }
        // Two Children
        else
        {
            Node *temp = findMax(root->left);
            root->val = temp->val;
            root->right = deleteNode(root->right, temp->val);
        }
    }
    return root;
}

int main()
{
    Node *root = NULL;
    root = insert(root, 500);
    root = insert(root, 100);
    root = insert(root, 200);
    root = insert(root, 300);
    root = insert(root, 350);
    root = insert(root, 450);
    root = insert(root, 400);
    root = insert(root, 600);
    root = insert(root, 550);
    inOrder(root);
    root = deleteNode(root, 100); // node with one child
    inOrder(root);
    root = deleteNode(root, 550); // node with no child
    inOrder(root);
    root = deleteNode(root, 400); // node with two children
    inOrder(root);
}