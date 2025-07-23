#include <bits/stdc++.h>
using namespace std;

// bfs traversal
vector<int> bfsOfGraph(int n, vector<int> adj[])
{
       // create visited array to keep track of visited elements to prevent from pushing into queue

       bool vis[n] = {0};
       // initially 1st node is always visited cuz the traversal is literally starting from there

       vis[0] = true;

       queue<int> q;
       vector<int> bfs;

       q.push(0); // push first to queue

       while (!q.empty())
       {
              int node = q.front();
              q.pop();
              bfs.push_back(node);

              for(auto it : adj[node]){
                     if(!vis[it]){
                            vis[it] = true;
                            q.push(it);
                     }
              }
       }

       return bfs;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 5; // number of nodes
    vector<int> adj[n];

    // creating the undirected graph
    adj[0].push_back(1);
    adj[1].push_back(0);

    adj[0].push_back(2);
    adj[2].push_back(0);

    adj[1].push_back(3);
    adj[3].push_back(1);

    adj[2].push_back(4);
    adj[4].push_back(2);

    vector<int> result = bfsOfGraph(n, adj);

    for (int node : result)
    {
        cout << node << " ";
    }

    return 0;
}
