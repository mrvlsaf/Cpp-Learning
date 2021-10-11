#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    char data;
    map<char,node*> child;
    bool terminal;
    node(char c)
    {
        data=c;
        terminal=false;

    }
};

int main()
{

}