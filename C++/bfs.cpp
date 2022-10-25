#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> graph;
vector<int> vis;

void bfs(int r)
{
    queue<int> q;
    q.push(r);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        if(vis[u])
            continue;
        vis[u] = 1;
        cout<<u<<endl;
        for(int v: graph[u])
            if(!vis[v])
                q.push(v);
    }
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
    bfs(1);
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
// 4
// 3
