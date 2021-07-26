// Given rectangle of length l and breadth b. Print area of rectange.

// Constraints:
// 1 <= l <= 10^9
// 1 <= b <= 10^9

// Input format:
// 2 space seperated integer l and b

// Output format:
// single number which is area of rectangle

// Sample input:
// 3 4

// Sample output:
// 12

#include<bits/stdc++.h>
using namespace std;

int main () {
    int l;
    int b;
    cin >> l >> b;
    cout<<l*1LL*b; //1LL typecast the l*b into long long so it could hold 10^18
    return 0;
}