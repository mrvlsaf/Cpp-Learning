#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;

int main()
{
    vector<int> nums = {3, 3};
    int target = 6;
    vector<int> avlbl(1e6 + 10);
    vector<int> ans(2);
    int size = nums.size();
    for (int i = 0; i < size; ++i)
    {
        avlbl[nums[i]] += 1;
    }
    // for (int i = 0; i < 7; ++i)
    // {
    //     cout << avlbl[i] << " ";
    // }
    for (int i = 0; i < size; ++i)
    {
        int x = target - nums[i];
        if (avlbl[nums[i]] < 2)
            avlbl[nums[i]] = 0;
        if (target - nums[i] > 0 && avlbl[x] == 1)
        {
            ans[0] = i;
            vector<int>::iterator ind;
            ind = find(nums.begin(), nums.end(), x);
            ans[1] = (distance(nums.begin(), ind));
            break;
        }
    }
    // cout << "yes";
    // for (int i = 0; i < ans.size(); ++i)
    // {
    //     cout << ans[i] << " ";
    // }
}