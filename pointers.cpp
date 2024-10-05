#include <iostream>

using namespace std;

int main()
{
      int a = 10;
      int* ptr = &a;
      int** dptr = &ptr;

      cout << "double derefernce: " << **(dptr) << endl; //output should be 10
      return 0;
}