#include <bits/stdc++.h>
using namespace std;

int lowerb(int arr[], int n, int val)
{
    int low = 0;
    int high = n - 1;
    int mid;
    while (high - low > 1)
    {
        mid = (high + low) / 2;
        if (val > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    if (val <= arr[low])
        return low;
    if (val <= arr[high])
        return high;
    else
        return -1;
}

int upperb(int arr[], int n, int val)
{
    int low = 0;
    int high = n - 1;
    int mid;
    while (high - low > 1)
    {
        mid = (high + low) / 2;
        if (val >= arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    if (val < arr[low])
        return low;
    if (val < arr[high])
        return high;
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
    int lb = lowerb(arr, n, val);
    int ub = upperb(arr, n, val);
    lb == -1 && ub == -1 ? cout << "NOT FOUND" : cout << "LB : " << arr[lb] << endl
                                                      << "UB : " << arr[ub] << endl;
}