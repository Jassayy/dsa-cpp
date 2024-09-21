#include <iostream>
using namespace std;

int main(){
     int n;
     cout << " value of n: " << endl;
     cin >> n;


      int sum = 0;
      for(int i = 1 ; i <= n ; i++){
            sum += i;
     }
      cout << "Sum of first " << n << " natural numbers is: " << sum << endl;

      return 0;

     
}