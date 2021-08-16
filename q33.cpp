#include <bits/stdc++.h>
using namespace std;

int binarySearch(int val, int arr[], int low, int high)
{
    if (high >= low)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == val)
        {
            return mid;
        }
        else if (val < arr[mid])
        {
            binarySearch(val, arr, low, mid);
        }
        else
        {
            binarySearch(val, arr, mid + 1, high);
        }
    }
    else
        return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int val;
    cin >> val;
    int low = 0;
    int high = n - 1;
    int index = binarySearch(val, arr, low, high);
    index == -1 ? cout << "Element not found" : cout << index+1;
}