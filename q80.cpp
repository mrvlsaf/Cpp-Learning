#include <bits/stdc++.h>
using namespace std;

const int v = 1e3 + 10; // can be total no. of vertices
const int n = 6;        // current total no. of vertices
vector<int> gp[v];
int vis[v];

void dfs(int vertex)
{
    if (vis[vertex])
        return;
    vis[vertex] = 1;
    // cout << vertex << "\n";
    for (auto child : gp[vertex])
    {
        // cout << "child is " << child << " parent is " << vertex << "\n";
        dfs(child);
    }
}

void insertEdge(int v1, int v2)
{
    gp[v1].push_back(v2);
    gp[v2].push_back(v1);
}

void printGraph()
{
    for (int i = 0; i <= n; ++i)
    {
        cout << i << " -> ";
        for (auto child : gp[i])
            cout << child << " ";
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    insertEdge(0, 3);
    insertEdge(1, 3);
    insertEdge(1, 2);
    insertEdge(2, 4);
    insertEdge(5, 6);
    int count = 0;
    for (int i = 0; i <= n; ++i)
    {
        if (vis[i])
            continue;
        dfs(i);
        count++;
    }
    // printGraph();
    // dfs(2);
    cout << count;
}