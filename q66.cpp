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
    if (root == NULL)
        return NULL;
    while (root->right != NULL)
        root = root->right;
    return root;
}

Node *findMin(Node *root)
{
    if (root == NULL)
        return NULL;
    while (root->left != NULL)
        root = root->left;
    return root;
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

Node *findNode(Node *root, int val)
{
    if (root == NULL)
        return NULL;
    else if (val == root->val)
        return root;
    else if (val < root->val)
        return findNode(root->left, val);
    else
        return findNode(root->right, val);
}

Node *inOrderSuccessor(Node *root, int val)
{
    Node *current = findNode(root, val);
    if (current == NULL)
        return NULL;
    else if (current->right != NULL)
        return findMin(current->right);
    else
    {
        Node *successor = NULL;
        Node *ancestor = root;
        while (ancestor != current)
        {
            if (current->val < ancestor->val)
            {
                successor = ancestor;
                ancestor = ancestor->left;
            }
            else
                ancestor = ancestor->right;
        }
        return successor;
    }
}

Node *inOrderPredecessor(Node *root, int val)
{
    Node *current = findNode(root, val);
    if (current == NULL)
        return NULL;
    else if (current->left != NULL)
        return findMax(current->left);
    else
    {
        Node *predecessor = NULL;
        Node *ancestor = root;
        while (ancestor != current)
        {
            if (current->val > ancestor->val)
            {
                predecessor = ancestor;
                ancestor = ancestor->right;
            }
            else
                ancestor = ancestor->left;
        }
        return predecessor;
    }
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
    // inOrder(root);
    // root = deleteNode(root, 100); // node with one child
    // inOrder(root);
    // root = deleteNode(root, 550); // node with no child
    // inOrder(root);
    // root = deleteNode(root, 400); // node with two children
    inOrder(root);
    Node *successor = inOrderSuccessor(root, 450);
    cout << "\n"
         << successor->val;
    Node *predecessor = inOrderPredecessor(root, 450);
    cout << "\n"
         << predecessor->val;
}