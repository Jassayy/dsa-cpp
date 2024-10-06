#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target, int st, int end)
{

      while (st <= end)
      {
            int mid = st + (end - st) / 2; // optimization in code which is equal to st + end /2 only but by this the integer value will not overflow when any st or end is INT_MAX

            if (target > arr[mid])
            {
                  return binarySearch(arr, target, mid + 1, end);
            }
            else if (target < arr[mid])
            {
                  return binarySearch(arr, target, st, mid - 1);
            }
            else
            {
                  return mid;
            }
      }
      return -1; // element not found i.e target doesnt exist
}
int main()
{
      vector<int> arr = {-1, 0, 3, 4, 5, 9, 12}; // odd vector
      int target = 12;

      cout << "element found at index: " << binarySearch(arr, target, 0, arr.size() - 1) << endl;

      vector<int> arr2 = {0, 3, 5, 7, 8, 9}; // even vector
      int target2 = 7;

      cout << "element found at index: " << binarySearch(arr2, target2, 0, arr2.size() - 1) << endl;
      return 0;
}