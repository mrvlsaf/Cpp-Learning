// // Optimization - sliding window concept

// 7 8 10 5 4
// k=3
// 7 8 10
// 8 10 5
// 10 5 4

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {7, 8, 10, 5, 4};
    int k = 3;
    int ans = INT_MAX;
    for (int i = 0; i < nums.size() - k + 1; i++)
    {
        ans = min(ans, (nums[i] + nums[i + 1] + nums[i + 2]));
    }
    cout << ans;
}