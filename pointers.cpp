#include <iostream>

using namespace std;

void changeA(int &b) // alias .... using different name but pointing to same memory address
{
      b = 20;
}
int main()
{
      // pass by ref using alias
      int a = 10;
      changeA(a);

      cout << "a : " << a << endl;

      return 0;
}