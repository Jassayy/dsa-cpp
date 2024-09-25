#include<iostream>
using namespace std;

void sumOfArray(int arr[] , int sz){
      int sum = 0;
      for(int i = 0 ; i < sz ; i++){
            sum+=arr[i];
      }
      cout<<"Sum of array elements: "<<sum<<endl;
}

void productOfArray(int arr[] , int sz){
      int product = 1;
      for(int i = 0 ; i < sz ; i++){
            product*=arr[i];
      }
      cout<<"Product of array elements: "<<product<<endl;
}


int main(){
      int arr[] ={1,2,3,4,5};
      int sz = sizeof(arr)/sizeof(arr[0]);

      sumOfArray(arr , sz);
      productOfArray(arr , sz);
      
      return 0;
}