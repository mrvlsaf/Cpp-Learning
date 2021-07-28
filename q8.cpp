// Input: s = "PPALLP"
// Output: true
// Explanation: The student has fewer than 2 absences and was never late 3 or more consecutive days.

#include<bits/stdc++.h>
using namespace std;

int main () {
    string s;
    int ab_count = 0, leave_count = 0;
    cin>>s;
    for (int i = 0; i < s.size(); i++) {
        // if (s[i] == 'A') {
        //     ab_count++;
        // }
        // else if (s[i] == 'L' && s[i-1] == 'L') {
        //     leave_count++;
        // }
        // else continue;

        s[i] == 'A' ? ab_count++ ? s[i] == 'L' && s[i-1] == 'L' ? leave_count++ : continue;
    }
    ab_count == 2 || leave_count == 2 ? cout<<"false" : cout<<"true";
    return 0;
}