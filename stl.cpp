#include <iostream>
#include <list>
#include<deque>

using namespace std;

int main()
{

      deque<int> d ; 

      d.push_back(10);
      d.push_front(23);
      
      for (int val : d)
      {
            cout << val << " ";
      }
      cout << endl;
      return 0;
}