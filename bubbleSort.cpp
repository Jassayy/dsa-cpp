#include <iostream>
#include <vector>

using namespace std;

vector<int> bubbleSort(vector<int> arr, int n) // time complexity n^2
{
      bool isSwap = false; // optimization
      for (int i = 0; i < n - 1; i++)
      {
            for (int j = 0; j < n - i - 1; j++)
            {
                  if (arr[j] > arr[j + 1])
                  {
                        swap(arr[j], arr[j + 1]);
                        isSwap = true; // if swap occurred, then array is not sorted yet
                  }

                  if (!isSwap)
                  {
                        // array was already sorted so no need for bubble sort to run n-1 times duhhhh!!!
                        return arr;
                  }
            }
            return arr;
      }
}

int main()
{

      vector<int> arr = {3, 6, 4, 1, 7, 2, 5, 9, 8};
      int n = arr.size();

      arr = bubbleSort(arr, n);

      for (int i = 0; i < n; i++)
      {
            cout << arr[i] << " "; // Prints sorted array in ascending order.
      }
      cout << endl;
      return 0;
}