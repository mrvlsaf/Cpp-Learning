#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        int rem;
        string s;
        string p = "";
        cin>>n;
        while (n!=0) {
            rem = n%10;
            s = to_string(rem);
            p = p + s;
            n = n/10;
        }
        cout<<stoi(p)<<endl;
    }
    return 0;
}