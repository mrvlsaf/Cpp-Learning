#include<bits/stdc++.h>
using namespace std;

int main () {
    int t, n;
    cin>>t;
    while (t--) {
        cin>>n;
        int rem;
        int final=0;
        while (n!=0) {
            rem = n%10;
            n = n/10;
            final = final+rem;
        }
        cout<<final<<endl;
    }
    return 0;
}