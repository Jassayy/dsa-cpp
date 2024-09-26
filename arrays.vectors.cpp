#include <iostream>
using namespace std;

void sumOfArray(int arr[], int sz)
{
      int sum = 0;
      for (int i = 0; i < sz; i++)
      {
            sum += arr[i];
      }
      cout << "Sum of array elements: " << sum << endl;
}

void productOfArray(int arr[], int sz)
{
      int product = 1;
      for (int i = 0; i < sz; i++)
      {
            product *= arr[i];
      }
      cout << "Product of array elements: " << product << endl;
}

void swapMinMax(int arr[], int sz)
{
      int minIndex = 0, maxIndex = 0;

      for (int i = 0; i < sz; i++)
      {
            if (arr[i] < arr[minIndex])
            {
                  minIndex = i;
            }
      }

      for (int i = 0; i < sz; i++)
      {
            if (arr[i] > arr[maxIndex])
            {
                  maxIndex = i;
            }
      }

      cout << "Array before swapping min and max: ";
      for (int i = 0; i < sz; i++)
      {
            cout << arr[i] << " ";
      }
      cout << endl;

      swap(arr[minIndex], arr[maxIndex]);
      cout << "Array after swapping min and max: ";
      for (int i = 0; i < sz; i++)
      {
            cout << arr[i] << " ";
      }
      cout << endl;
}

// pass by reference
// change in fucntion is reflecting in main function itself
void changeArr(int arr[], int sz)
{
      for (int i = 0; i < sz; i++)
      {
            arr[i] = 2 * arr[i];
      }
}

// linear_search_algorithm :: O(n) time complexity

int linearSearch(int arr[], int sz, int target)
{
      for (int i = 0; i < sz; i++)
      {
            if (arr[i] == target)
            {
                  return i;
                  break;
            }
      }
      return -1; // element not found
}

// reversing an array
// 2 pointer approach

void reverseArray(int arr[], int sz)
{
      int start = 0, end = sz - 1;

      while (start < end)
      {
            swap(arr[start], arr[end]);
            start++;
            end--;
      }
}

// to print unique values of an array

void printUniqueValues(int arr[], int sz)
{
      for (int i = 0; i < sz; i++)
      {
            bool isUnique = true;
            for (int j = 0; j < i; j++)
            {
                  if (arr[j] == arr[i])
                  {
                        isUnique = false;
                        break;
                  }
            }
            if (isUnique)
            {
                  cout << arr[i] << " ";
            }
      }
      cout << endl;
}

//to print intersection of two arrays
void printIntersection(int arr[] , int arr2[] ,int sz1 , int sz2){
      int count = 0;
      for(int i = 0 ; i < sz1 ; i++){
            for(int j = 0 ; j < sz2 ; j++){
                  if(arr[i] == arr2[j]){
                        cout<<arr[i]<<" ";
                        count++;
                  }
            }
      }
      cout<<"\nCount of common elements: "<<count<<endl;
}

int main()
{
      int arr[] = {1, 4, 3, 2, 5, 4, 5, 6, 1, 2};
      int sz1 = sizeof(arr) / sizeof(arr[0]);

      int arr2[] = {1,2,3,4,7,9,8,7,9};
      int sz2 = sizeof(arr2) / sizeof(arr2[0]);

      // sumOfArray(arr, sz);
      // productOfArray(arr, sz);
      // swapMinMax(arr, sz);
      // changeArr(arr, sz);

      // for (int i = 0; i < sz; i++)
      // {
      //       cout << arr[i] << " ";
      // }
      // cout << endl;

      // linear search for a specific element
      // return index of element if found else -1
      // in this case, target is 5

      // cout << linearSearch(arr, sz, 5) << endl;

      reverseArray(arr, sz1);
      for (int i = 0; i < sz1; i++)
      {
            cout << arr[i] << " ";
      }
      cout << endl;

      printUniqueValues(arr, sz1);

      printIntersection(arr, arr2, sz1, sz2);

      return 0;
}