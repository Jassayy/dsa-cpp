#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Stack
{
          // vector<int> v;
          list<int> ll; // using linked list

public:
          void push(int val) // O(1)
          {
                    // v.push_back(val);
                    ll.push_front(val); // using linked list
          }

          void pop() // O(1)
          {
                    // v.pop_back();
                    ll.pop_front(); // using linked list
          }

          int top() // O(1)
          {
                    // return v[v.size() - 1];
                    return ll.front(); // using linked list
          }

          bool empty()
          {
                    // return v.size() == 0;
                    return ll.size() == 0; // using linked list
          }
};

int main()
{
          Stack s;

          s.push(20);
          s.push(30);
          s.push(40);

          while (!s.empty())
          {
                    cout << s.top() << " ";
                    s.pop();
          }

          cout << endl;

          return 0;
}