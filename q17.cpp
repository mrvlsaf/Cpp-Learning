//Pascals triangle
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int arr[n][n];
        int x = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j < i + 1)
                {
                    if (j == 0)
                    {
                        arr[i][j] = x;
                    }
                    else if (j == n)
                    {
                        arr[i][j] = x;
                    }
                    else
                    {
                        arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
                    }
                }
                else
                {
                    arr[i][j] = 0;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == 0)
                {
                    cout << " ";
                }
                else
                {
                    cout << arr[i][j] << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}