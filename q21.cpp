#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, sum = 0, count = 0;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i + 1; j < n; j++)
        {
            sum = sum + arr[j];
            if (arr[i] + sum == 0)
            {
                count++;
                break;
            }
        }
    }
    cout << count;
}