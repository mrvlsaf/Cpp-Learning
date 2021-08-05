#include <bits/stdc++.h>
using namespace std;
const int n = 4;
int arr[n];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int min;
        cin >> s;
        arr[0] = arr[1] = arr[2] = arr[3] = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'r')
                arr[0]++;
            else if (s[i] == 'u')
                arr[1]++;
            else if (s[i] == 'b')
                arr[2]++;
            else if (s[i] == 'y')
                arr[3]++;
        }
        cout << *min_element(arr, arr + n) << endl;
    }
}