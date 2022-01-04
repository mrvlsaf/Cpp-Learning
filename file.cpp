// C++ program to print the required pattern
#include <bits/stdc++.h>
using namespace std;

// Function to print the required pattern
void printPattern(int n, int m)
{
    // arr[][] will store the pattern matrix
    int arr[n][n], k, i, j, p = 1, f;

    // Store the values for upper triangle
    // of the pattern
    for (k = 0; k < m; k++)
    {
        j = k;
        i = 0;
        while (j >= 0)
        {
            arr[i][j] = p;
            p++;
            i = i + 1;
            j = j - 1;
        }
    }

    // Store the values for lower triangle
    // of the pattern
    for (k = 1; k < m; k++)
    {
        i = k;
        j = m - 1;
        f = k;
        while (j >= f)
        {
            arr[i][j] = p;
            p++;
            i = i + 1;
            j = j - 1;
        }
    }

    // Print the pattern
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Driver code
int main()
{
    int n = 5, m = 3;

    printPattern(n, m);

    return 0;
}
