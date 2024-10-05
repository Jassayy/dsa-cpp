#include <iostream>

using namespace std;

int main()
{
      int *ptr2;            // 100
      int *ptr1 = ptr2 + 2; // 108

      cout << "Using SUBTRACT ARITHMETIC OPERATION ON POINTERS: " << ptr1 - ptr2 << endl; // output should be 2 ie 2 integers as 108 - 100 is 8 i.e 2 integers
      return 0;
}