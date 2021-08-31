#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int> &nums)
{
    int size = nums.size();
    int subset_size = (1 << size);
    vector<vector<int>> subsets;
    for (int i = 0; i < subset_size; ++i)
    {
        vector<int> subset;
        for (int j = 0; j < size; ++j)
        {
            if ((i & (1 << j)) != 0)
                subset.push_back(nums[j]);
        }
        subsets.push_back(subset);
    }
    return subsets;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    auto sub = subsets(v);
    for (auto subset : sub)
    {
        for (auto ele : subset)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
}