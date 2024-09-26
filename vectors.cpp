#include <iostream>
#include <vector> //include this for vector
using namespace std;

int main()
{
      vector<int> vec = {1, 2, 3};

      // for each loop to print values of vector..NOTE: int i holds the value of the position and not the index
      for (int val : vec)
      {
            cout << val << " "; // prints each element of vector
      }
      // o/p {1 , 2, 3}

      vector<char> name = {'a', 'b', 'c', 'd'};

      for (char val : name)
      {
            cout << val << " "; // prints each element of vector
      }

      // vector functions
      cout << "size of vector: " << vec.size() << endl;
      vec.push_back(6);
      cout << "size after pushing : " << vec.size() << endl;

      vec.pop_back();
      cout << "size after popping : " << vec.size() << endl;

      for (int val : vec)
      {
            cout << val << endl;
      }

      vector<int> number; // vector number of size 0

      number.push_back(0);
      number.push_back(1);
      number.push_back(2);
      number.push_back(3);
      number.push_back(4);

      cout << "size: " << number.size() << endl;         // 3
      cout << "capacity: " << number.capacity() << endl; // 4

      return 0;
}