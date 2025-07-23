#include <bits/stdc++.h>
using namespace std;

// adjacency matrix
// int main()
// {
//        ios::sync_with_stdio(false);
//        cin.tie(nullptr);

//        // n -> number of vertices , m -> no of edges
//        int n, m;
//        cin >> n >> m;

//        int adj[n + 1][n + 1] = {0};

//        // loop around m lines below n and m for inputs

//        for (int i = 0; i < m; i++)
//        {
//               int u, v;
//               cin >> u >> v;
//               adj[u][v] = 1;
//               adj[v][u] = 1;
//        }

//        for (int i = 1; i <= n; i++)
//        {
//               for (int j = 1; j <= n; j++)
//               {
//                      cout << adj[i][j] << " ";
//               }

//               cout << endl;
//        }

//        return 0;
// }

// adjacency list way
int main()
{

       ios::sync_with_stdio(false);
       cin.tie(nullptr);

       int n, m;
       cin >> n >> m;

       // Adjacency list of size n
       vector<vector<int>> adj(n);

       for (int i = 0; i < m; i++)
       {
              int u, v;
              cin >> u >> v;
              u--;
              v--; // only if input is 1-based. Remove this if input is 0-based

              // Add edge to adjacency list (undirected)
              adj[u].push_back(v);
              adj[v].push_back(u); //only if its undirected graph
       }

       // Print the adjacency list
       for (int i = 0; i < n; i++)
       {
              cout << "Node " << i << ": ";
              for (int neighbor : adj[i])
              {
                     cout << neighbor << " ";
              }
              cout << '\n';
       }

       return 0;
}