#include <iostream>
#include <vector>

using namespace std;

vector<int> insertionSort(vector<int> arr, int n)
{ // time complexity n^2
      for (int i = 1; i < n; i++)
      {
            int current = arr[i];
            int prev = i - 1;

            while (prev >= 0 && arr[prev] > current)
            {
                  arr[prev + 1] = arr[prev];
                  prev--;
            }
            arr[prev + 1] = current; // Insert current element at its correct position.
      }
      return arr;
}

int main()
{

      vector<int> arr = {3, 6, 4, 1, 7, 2, 5, 9, 8};
      int n = arr.size();

      arr = insertionSort(arr, n);

      for (int i = 0; i < n; i++)
      {
            cout << arr[i] << " "; // Prints sorted array in ascending order.
      }
      cout << endl;
      return 0;
}