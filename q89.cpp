#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double meal_cost = 10.25;
    int tip_percent = 17;
    int tax_percent = 5;
    double result1 = ((double)tip_percent / 100) * meal_cost;
    double result2 = ((double)tax_percent / 100) * meal_cost;
    double result = meal_cost + result1 + result2;

    // cout << (int)((((double)tip_percent / 100) * meal_cost) + (((double)tax_percent / 100) * meal_cost) + meal_cost);
    if (result - floor(result) > ceil(result) - result)
        cout << ceil(result);
    else
        cout << floor(result);
    // cout << floor(result) << " " << ceil(result);
}