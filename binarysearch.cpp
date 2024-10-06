#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
      int st = 0, end = arr.size() - 1;

      while (st <= end)
      {
            int mid = (st + end) / 2;

            if (target > arr[mid])
            {
                  st = mid + 1;
            }
            else if (target < arr[mid])
            {
                  end = mid - 1;
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
      vector<int> arr = {-1, 0, 3, 4, 5, 9, 12}; //odd vector
      int target = 12;

      cout << "element found at index: " << binarySearch(arr, target) << endl;


      vector<int> arr2 = {0 , 3 , 5, 7 , 8 , 9}; //even vector
      int target2 = 7;

      cout << "element found at index: " << binarySearch(arr2, target2) << endl;
      return 0;
}