#include<bits/stdc++.h>
using namespace std;

int main () {
    int a, b;
    string numList[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> a >> b;
    for (int i=a; i<=b; ++i) {
        i > 9 ? i % 2 == 0 ? cout<<"even"<<endl : cout<<"odd"<<endl : cout<<numList[i]<<endl;
    }
    return 0;
}