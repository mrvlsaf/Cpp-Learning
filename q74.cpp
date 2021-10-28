#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
vector<int> graph[N];
bool vis[N];

void dfs(int vertex)
{
    if (vis[vertex])
        return;
    vis[vertex] = true;
    // cout << vertex << "\n";
    for (int child : graph[vertex])
    {
        // cout << "parent " << vertex << " Child " << child << "\n";
        dfs(child);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    // n = no. of vertices
    // m = no. of edges
    for (int i = 0; i < m; ++i)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        if (vis[i + 1])
            continue;
        dfs(i + 1);
        ans++;
    }
    cout << ans;
}