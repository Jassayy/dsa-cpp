#include <iostream>
#include <list>
#include<deque>

using namespace std;

int main()
{

      list<int> l;

      l.push_back(10);
      l.push_front(50);

      for (int val : l)
      {
            cout << val << " ";
      }
      cout << endl;
      return 0;
}