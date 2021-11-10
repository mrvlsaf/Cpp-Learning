#include <bits\stdc++.h>
using namespace std;

const int ver = 5;
vector<int> arr[ver];
bool visited[ver];

void addNode(int v1, int v2)
{
    arr[v1].push_back(v2);
    arr[v2].push_back(v1);
}

void printGraph()
{
    for (int i = 0; i < ver; ++i)
    {
        cout << i << "-> ";
        for (auto child : arr[i])
            cout << child << " ";
        cout << "\n";
    }
}

bool dfs(int v, int par)
{
    bool isLoopExists = false;
    visited[v] = true;
    // cout << v << "\n";
    for (auto child : arr[v])
    {
        if (visited[child] && child == par)
            continue;
        if (visited[child])
            return true;
        isLoopExists |= dfs(child, v);
        // cout << "parent " << v << "child " << child << "\n";
    }
    return isLoopExists;
}

int main()
{
    addNode(0, 1);
    addNode(0, 2);
    addNode(0, 3);
    addNode(1, 4);
    addNode(1, 3);
    addNode(3, 4);
    // printGraph();
    bool isLoopExists = false;
    for (int i = 0; i < ver; ++i)
    {
        if (visited[i])
            continue;
        if (dfs(i, 0))
        {
            isLoopExists = true;
            break;
        }
    }
    cout << isLoopExists;
}