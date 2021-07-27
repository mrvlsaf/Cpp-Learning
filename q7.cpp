#include<bits/stdc++.h>
using namespace std;

int main () {
    int n, mdh, mdv;
    cin>>n;
    int length = 2*n-1;
    for (int i=0; i<length; i++) {
        for (int j=0; j<length; j++) {
            mdh = j <= n-1 ? j : 2*n-2-j; //minimum distance horizontally
            mdv = i <= n-1 ? i : 2*n-2-i; //minimum distance vertically
            mdh<mdv ? cout<<n-mdh : cout<<n-mdv;
        }
        cout<<endl;
    }
    return 0;
}

// // in C language
// #include<stdio.h>

// int main () {
//     int n, mdh, mdv;
//     scanf("%d", &n);
//     int length = 2*n-1;
//     for (int i=0; i<length; i++) {
//         for (int j=0; j<length; j++) {
//             mdh = j <= n-1 ? j : 2*n-2-j; //minimum distance horizontally
//             mdv = i <= n-1 ? i : 2*n-2-i; //minimum distance vertically
//             mdh<mdv ? printf("%d", n-mdh) : printf("%d", n-mdv);
//         }
//         printf("\n");
//     }
//     return 0;
// }