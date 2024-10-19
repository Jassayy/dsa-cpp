#include <iostream>
#include <list>
#include<deque>
#include<stack>
#include<queue>

using namespace std;

int main()
{
//priority queue acts in the same way but the highest element is always on the top of the queue
      queue<int> q;

      q.push(1);
      q.push(2);
      q.push(3);

      while(!q.empty()){
            cout << q.front() << " ";
            q.pop();
      }
      cout << endl;
   return 0;
}