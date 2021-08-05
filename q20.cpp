class Solution {
public:

    bool containsDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        const int N = 1e7+10;
        int flag = 0;
        int arr[N];
        int max = *max_element(nums.begin(), nums.end());
        bool result;
        
        for (int i = 0; i < max; i++)
        {
            arr[nums[i]]++;
        }
        for (int i = 0; i < max; i++)
        {
            if (arr[i] >= 2)
            {
                flag = 0;
                result = true;
                break;
            }
            else
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            result = false;
        }
        return result;
    }
};