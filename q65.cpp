//PreOrder, InOrder, PostOrder traversel on Binary Search Tree

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *left;
    Node *right;
};

void preOrder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
}

void postOrder(Node *root)
{
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->val << " ";
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
        root = getNewNode(x);
    else if (x <= root->val)
        root->left = insert(root->left, x);
    else
        root->right = insert(root->right, x);
    return root;
}

int main()
{
    Node *root = NULL;
    root = insert(root, 400);
    root = insert(root, 100);
    root = insert(root, 200);
    root = insert(root, 300);
    root = insert(root, 500);
    root = insert(root, 600);
    root = insert(root, 700);
    root = insert(root, 50);
    root = insert(root, 550);
    cout << "PREORDER: "; preOrder(root); cout << "\n";
    cout << "INORDER: "; inOrder(root); cout << "\n";
    cout << "POSTORDER: "; postOrder(root); cout << "\n";
}