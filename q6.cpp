#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    n%4 == 0 ? cout<<n/4-1 : cout<<n/4;
    return 0;
}