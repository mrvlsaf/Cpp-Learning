#include <bits/stdc++.h>
using namespace std;

const int v = 5;
vector<int> arr[v];

void addEdge(int v1, int v2)
{
    arr[v1].push_back(v2);
    arr[v2].push_back(v1);
}

void printGraph()
{
    for (int i = 0; i < v; ++i)
    {
        cout << i << ": ";
        for (int x : arr[i])
            cout << "->" << x;
        cout << "\n";
    }
}

int main()
{
    addEdge(0, 1);
    addEdge(0, 4);
    addEdge(1, 2);
    addEdge(1, 3);
    addEdge(1, 4);
    addEdge(2, 3);
    addEdge(3, 4);
    printGraph();
}