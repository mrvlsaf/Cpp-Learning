// #include <bits/stdc++.h>
// using namespace std;

// double medianOfFourElements(int a, int b, int c, int d)
// {
//     int Max = max(a, max(b, max(c, d)));
//     int Min = min(a, min(b, min(c, d)));
//     return (double)(a + b + c + d - Max - Min) / 2;
// }

// double medianOfThreeElements(int a, int b, int c)
// {
//     return a + b + c - max(a, max(b, c)) - min(a, min(b, c));
// }

// double medianOfTwoElements(int a, int b)
// {
//     return (double)(a + b) / 2;
// }

// double findMedianforZero(vector<int> &lg, int &m)
// {
//     if (m == 0)
//         return -1;
//     if (m & 1)
//         return (lg[m / 2]);
//     return (double)(lg[m / 2] + lg[m / 2 - 1]) / 2;
// }

// double findMedian(vector<int> &sm, int &n, vector<int> &lg, int &m)
// {
//     if (n > m)
//         findMedian(lg, m, sm, n);
//     if (n == 0)
//         return findMedianforZero(lg, m);
//     if (n == 1)
//     {
//         if (m == 1)
//             return medianOfTwoElements(sm[0], lg[0]);
//         if (m & 1)
//             return medianOfTwoElements(lg[m / 2], medianOfThreeElements(sm[0], lg[m / 2 - 1], lg[m / 2 + 1]));
//         return medianOfThreeElements(lg[m / 2], lg[m / 2 - 1], sm[0]);
//     }
//     else if (n == 2)
//     {
//         if (m == 2)
//             return medianOfFourElements(sm[0], sm[1], lg[0], lg[1]);
//         if (m & 1)
//             return medianOfThreeElements(lg[m / 2], max(sm[0], lg[m / 2 - 1]), min(sm[1], lg[m / 2 + 1]));
//         return medianOfFourElements(lg[m / 2], lg[m / 2 - 1], max(sm[0], lg[m / 2 - 2]), min(sm[1], lg[m / 2 + 1]));
//     }
// }

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<int> num1(n);
//     vector<int> num2(m);
//     for (int i = 0; i < n; ++i)
//         cin >> num1[i];
//     for (int i = 0; i < m; ++i)
//         cin >> num2[i];
//     double result = findMedian(num1, n, num2, m);
//     cout << result;
// }

class Solution
{
public:
    double medianOfFourElements(int a, int b, int c, int d)
    {
        int Max = max(a, max(b, max(c, d)));
        int Min = min(a, min(b, min(c, d)));
        return (double)(a + b + c + d - Max - Min) / 2;
    }

    double medianOfThreeElements(int a, int b, int c)
    {
        return a + b + c - max(a, max(b, c)) - min(a, min(b, c));
    }

    double medianOfTwoElements(int a, int b)
    {
        return (double)(a + b) / 2;
    }

    double findMedianforZero(vector<int> &lg, int &m)
    {
        if (m == 0)
            return -1;
        if (m & 1)
            return (lg[m / 2]);
        return (double)(lg[m / 2] + lg[m / 2 - 1]) / 2;
    }

    double findMedian(vector<int> &sm, int &n, vector<int> &lg, int &m)
    {
        if (n > m)
            findMedian(lg, m, sm, n);
        if (n == 0)
            return findMedianforZero(lg, m);
        if (n == 1)
        {
            if (m == 1)
                return medianOfTwoElements(sm[0], lg[0]);
            if (m & 1)
                return medianOfTwoElements(lg[m / 2], medianOfThreeElements(sm[0], lg[m / 2 - 1], lg[m / 2 + 1]));
            return medianOfThreeElements(lg[m / 2], lg[m / 2 - 1], sm[0]);
        }
        else if (n == 2)
        {
            if (m == 2)
                return medianOfFourElements(sm[0], sm[1], lg[0], lg[1]);
            if (m & 1)
                return medianOfThreeElements(lg[m / 2], max(sm[0], lg[m / 2 - 1]), min(sm[1], lg[m / 2 + 1]));
            return medianOfFourElements(lg[m / 2], lg[m / 2 - 1], max(sm[0], lg[m / 2 - 2]), min(sm[1], lg[m / 2 + 1]));
        }
    }
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int n = num1.size();
        int m = num2.size();
        cout << findMedian(num1, n, num2, m);
    }
};