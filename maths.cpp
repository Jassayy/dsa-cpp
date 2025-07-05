#include <iostream>
#include <cmath>

using namespace std;

string isPrime(int n)
{
      for (int i = 2; i * i <= n; i++)
      {
            if (n % i == 0)
            {
                  return "Not Prime";
            }
      }
      return "Prime";
}

void printDigits(int n)
{

      int count = 0, sum = 0;

      while (n != 0)
      {
            int lastDigit = n % 10;
            cout << lastDigit << endl;
            sum += lastDigit;
            count++;
            n = n / 10;
      }

      cout << "Count " << count << endl;
      cout << "Sum " << sum << endl;
}

int main()
{

      int n = 35680;
      printDigits(n);
      cout << endl;
      // another way
      cout << (int)(log10(n) + 1) << endl;

      return 0;
}