#include <bits/stdc++.h>
using namespace std;

class Edge
{

public:
       int src, des, wt;

       Edge(int src, int des, int wt)
       {
              this->src = src;
              this->des = des;
              this->wt = wt;
       }
};

void createGraph(vector<vector<Edge>> &graph)
{
       graph[0].push_back(Edge(0, 2, 1));
       graph[1].push_back(Edge(1, 2, 4));
       graph[1].push_back(Edge(1, 3, 4));
       graph[2].push_back(Edge(2, 0, 6));
       graph[2].push_back(Edge(2, 1, 3));
       graph[2].push_back(Edge(2, 3, 6));
       graph[3].push_back(Edge(3, 1, 9));
       graph[3].push_back(Edge(3, 2, 2));
}

int main()
{
       ios::sync_with_stdio(false);
       cin.tie(nullptr);

       int v = 4; // no. of vertices / nodes

       vector<vector<Edge>> graph(v);

       createGraph(graph);

       // print all
       // for (int i = 0; i < v; i++)
       // {
       //        cout << "Node" << i << "connects to : ";

       //        for (Edge e : graph[i])
       //        {
       //               cout << e.des << " ";
       //        }

       //        cout << endl;
       // }

       // print neighbours of 2

       for (Edge e : graph[2])
       {
              cout << e.des << " with wt: " << e.wt << endl;
       }

       cout << endl;

       return 0;
}