#include <bits/stdc++.h>
using namespace std;

int minBoxes(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int i = 0, j = n - 1;
    int ans = 0;
    while (i <= j)
    {
        ans++;
        if (arr[i] + arr[j] <= k)
            i++;
        j--;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    cout << minBoxes(arr, n, k);
    return 0;
}