#include <bits/stdc++.h>
#define MAX 10000
using namespace std;
vector<pair<int, pair<int, int>>> G;
vector<pair<int, pair<int, int>>> MST;
int parent[MAX];
void initialize(int n_nodes)
{
    for (int i = 0; i < n_nodes; i++)
    {
        parent[i] = i;
    }
}
void union_set(int a, int b)
{
    parent[a] = parent[b];
}
void addWeightedEdge(int u, int v, int w)
{
    G.push_back(make_pair(w, make_pair(u, v)));
}
int find(int i)
{
    if (i == parent[i])
        return i;
    else
        return find(parent[i]);
}
void kruskal()
{
    sort(G.begin(), G.end());
    for (int i = 0; i < G.size(); i++)
    {
        int a,b;
        a = find(G[i].second.first);
        b = find(G[i].second.second);
        if (a != b)
        {
            MST.push_back(G[i]);
            union_set(a, b);
        }
    }
}
void displayMST()
{
    int total_weight = 0;
    cout << "Minimum Spanning Tree: " << endl;
    for (int i = 0; i < MST.size(); i++)
    {
        total_weight += MST[i].first;
        cout << MST[i].second.first << "->" << MST[i].second.second << " " << MST[i].first << endl;
    }
    cout << "Total cost of MST: " << total_weight << endl
         << endl;
}
int main()
{
    int n_nodes, n_edges;
    int u, v, w;
    cin >> n_nodes >> n_edges;
    for (int i = 0; i < n_edges; i++)
    {
        cin >> u >> v >> w;
        addWeightedEdge(u, v, w);
    }
    initialize(n_nodes);
    kruskal();
    displayMST();
}

//input
// 7 9
// 6 1 10
// 6 5 25
// 1 2 28
// 2 7 14
// 2 3 16
// 4 7 18
// 3 4 12
// 4 5 22
// 5 7 24

//output
// Minimum Spanning Tree: 
// 6->1 10
// 3->4 12
// 2->7 14
// 2->3 16
// 4->5 22
// 6->5 25
// Total cost of MST: 99
