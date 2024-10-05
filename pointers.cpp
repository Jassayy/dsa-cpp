#include <iostream>

using namespace std;

void changeA(int *ptr)
{
      *ptr = 20;
}
int main()
{
      // pass by reference
      int a = 10;

      cout << "a: " << a << endl;

      // changeA(a);  this will not reflect in main function cuz it is pass by value..so use &a to pass mem address of int a

      changeA(&a);
      cout << "After pass by ref: a : " << a << endl;

      return 0;
}