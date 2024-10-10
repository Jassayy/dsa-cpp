#include <iostream>
#include <vector>

using namespace std;

vector<int> selectionSort(vector<int> arr, int n)
{
      for (int i = 0; i < n - 1; i++)
      {
            int smallest_index = i;

            for (int j = i + 1; j < n; j++)
            {
                  if (arr[j] < arr[smallest_index])
                  {
                        smallest_index = j;
                  }
                        }
            swap(arr[i], arr[smallest_index]);
      }
      return arr;
}

int main()
{

      vector<int> arr = {3, 6, 4, 1, 7, 2, 5, 9, 8};
      int n = arr.size();

      arr = selectionSort(arr, n);

      for (int i = 0; i < n; i++)
      {
            cout << arr[i] << " "; // Prints sorted array in ascending order.
      }
      cout << endl;
      return 0;
}