#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;
};

Node *head = NULL;
int size = 0;

int ans(vector<int> &nums)
{
    Node *ptr = head;
    int i = 0, j = 0, result = 0;
    while (ptr)
    {
        if (ptr->val == nums[i])
        {
            j++;
            i++;
        }
        else
        {
            j = 0;
        }
        if(j!=0){
            
        }
        ptr = ptr->next;
    }
    return result;
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
    insert(0, 1);
    insert(1, 2);
    insert(2, 3);
    insert(3, 4);
    insert(4, 5);
    insert(5, 6);
    print();
    vector<int> nums = {0, 1, 3};
    sort(nums.begin(), nums.end());
    cout << ans(nums);
}