#include <iostream>

using namespace std;

int main()
{
      int a = 10;
      cout << &a << endl;
      // output 0x61ff0c  this is the memory address of int 'a' and & operator is used to print this value

      int *ptr = &a;
      cout << ptr << endl;
      // output 0x61ff0c  this is the same memory address printed by & operator as above

      cout << &ptr << endl;
      // also print address of pointer 0x61ff04

      // can do same with other data types...just the data type of pointer should be same as variable

      int **ptr2 = &ptr;
      cout << ptr2 << endl;
      // output 0x61ff04  this is the memory address of pointer ptr and & operator is used to print this value

      // we can also dereference the pointer using * operator to access the value at that memory address
      // cout << *ptr2 << endl;
      return 0;
}