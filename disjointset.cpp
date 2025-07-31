#include <bits/stdc++.h>
using namespace std;

class DisjointSet
{
       vector<int> rank, parent;

public:
       // constructor
       DisjointSet(int n)
       {
              parent.resize(n + 1);
              rank.resize(n + 1, 0); // n+1 because of 1 based indexing

              for (int i = 0; i <= n; i++)
              {
                     parent[i] = i;
              }
       }

       int findUParent(int node)
       {
              if (node == parent[node])
                     return node;

              return parent[node] = findUParent(parent[node]); // path compression
       }

       void unionByRank(int u, int v)
       {
              // find ultimate parent
              int pu = findUParent(u);
              int pv = findUParent(v);

              if (pu == pv)
                     return;

              if (rank[pu] < rank[pv])
              {
                     parent[pu] = pv;
              }
              else if (rank[pu] > rank[pv])
              {
                     parent[pv] = pu;
              }
              else
              {
                     parent[pv] = pu;
                     rank[pu]++;
              }
       }
};

int main()
{
       ios::sync_with_stdio(false);
       cin.tie(nullptr);

       DisjointSet ds(7);
       ds.unionByRank(1, 2);
       ds.unionByRank(2, 3);
       ds.unionByRank(4, 5);
       ds.unionByRank(6, 7);
       ds.unionByRank(5, 6);

       // lets check if 3 and 7 belings to the same component or not
       if (ds.findUParent(3) == ds.findUParent(7))
       {
              cout << "same component\n";
       }
       else
       {
              cout << "different components\n";
       }

       ds.unionByRank(3, 7);

       if (ds.findUParent(3) == ds.findUParent(7))
       {
              cout << "same component\n";
       }
       else
       {
              cout << "different components\n";
       }

       return 0;
}