// WAP to print patter which wil accept an integer as input representing the number of lines in the pattern and output will contain the pattern

// Sample input:
// 4

// Sample output:
// *
// **
// ***
// ****

#include<bits/stdc++.h>
using namespace std;

int main () {
    int inp;
    cin>>inp;
    for (int i=1; i <= inp; i++) {
        for (int j=1; j<=i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
