#include<iostream>
using namespace std;

int main(){

//printing factorial
      int n , fact = 1;

      cout <<"enter a number\n";
      cin>> n;

     for(int i = 1 ; i <= n ; i++){
            fact = fact*i;
     }

     cout << "factorial of " << n << " is " << fact << endl;


      return 0;

}