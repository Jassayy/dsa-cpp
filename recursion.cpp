#include <iostream>
#include<vector>

using namespace std;

// int factorial(int n){
//        if(n == 0){
//               return 1;
//        }

//        return n * factorial(n-1);
// }

//Fibonacci using recursion
// int fib(int n) {
//         if(n==0 || n==1){
//             return n;
//         }

//         return fib(n-1) + fib(n-2);
//     }

//check if array is sorted or not
// bool isSorted(vector<int> arr, int n){
//    if(n == 0 || n == 1){
//        return true;
//    }    

//    return arr[n-1] >= arr[n-2] && isSorted(arr , n-1);
// }

//binary search using recursion
//time complexity - O(logn) and space complexity is also O(n)
int binarySearch(vector<int> arr , int target , int st , int end){
       
       
       while(st <= end){
              int mid = st + (end - st)/2;

              if(arr[mid] == target){
                     return mid;
              }else if(arr[mid] < target){
                     //search in right half
                     return binarySearch(arr , target , mid+1 , end);
              }else{
                     return binarySearch(arr , target , st , mid-1);
              }
       }
       return -1;
}




int main()
{
       vector<int> arr = {1,4,3,2,5};

       int st = 0 , end = arr.size() - 1;
       // cout << isSorted(arr , arr.size());
       cout << binarySearch(arr , 5 , st , end);

          return 0;
} 