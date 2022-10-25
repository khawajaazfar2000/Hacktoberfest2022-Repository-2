#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> graph;
vector<int> vis;

void dfs(int u)
{
    vis[u] = 1;
    cout<<u<<endl;
    for(int v: graph[u])
        if(!vis[v])
            dfs(v);
}

int main(){
    int n, m;
    cin >> n >> m;
    graph.resize(n+1);
    vis.resize(n+1);
    for(int i = 0; i < m ; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1);
}

// input
// 4 4
// 1 2
// 1 4
// 2 3
// 3 4

// output
// 1
// 2
// 3
// 4
