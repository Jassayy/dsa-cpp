#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], bool vis[], vector<int> &res)
{
       vis[node] = true;
       res.push_back(node);

       for (auto it : adj[node])
       {
              if (!vis[it])
              {
                     dfs(it, adj, vis, res);
              }
       }
}

vector<int> dfsOfGraph(int n, vector<int> adj[])
{
       bool vis[n] = {0};
       vector<int> res;
       int start = 0;

       dfs(start, adj, vis, res);

       return res;
}

int main()
{
       ios::sync_with_stdio(false);
       cin.tie(nullptr);

       // Sample input
       int n = 5; // number of nodes
       vector<int> adj[n];

       // Adding edges to an undirected graph:
       // 0 - 1, 0 - 2, 1 - 3, 2 - 4
       adj[0].push_back(1);
       adj[1].push_back(0);

       adj[0].push_back(2);
       adj[2].push_back(0);

       adj[1].push_back(3);
       adj[3].push_back(1);

       adj[2].push_back(4);
       adj[4].push_back(2);

       vector<int> result = dfsOfGraph(n, adj);

       for (int node : result)
       {
              cout << node << " ";
       }

       return 0;
}
