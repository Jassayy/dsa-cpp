#include <iostream>
#include <list>
#include<deque>
#include<stack>

using namespace std;

int main()
{

     stack<int> s;
     stack<int> s2;

     s.push(10);
     s.push(20);
     s.push(30);
   
      

      s2.swap(s);
      cout << s2.size() << endl;
      cout << s.size() << endl;
   

    cout << s.top() << endl;
      return 0;
}