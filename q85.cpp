// Some branstorming on Binary Search and Insert if not searched

#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> a, int low, int high, int target)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        cout << mid << " ";
        if (target > a[mid])
            low = mid + 1;
        else if (target < a[mid])
            high = mid - 1;
        else if (target == a[mid])
            return mid;
        else
            return low;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> a = {2, 4, 6, 8, 10, 12};
    int target = 6;
    cout << "result " << binarySearch(a, 0, a.size() - 1, target);
}