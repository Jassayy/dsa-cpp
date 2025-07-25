#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &arr, int st, int end, int mid) // O(n)
{
          int i = st, j = mid + 1;
          vector<int> temp;
          while (i <= mid && j <= end)
          {
                    if (arr[i] <= arr[j])
                    {
                              temp.push_back(arr[i]);
                              i++;
                    }
                    else
                    {
                              temp.push_back(arr[j]);
                              j++;
                    }
          }

          while (i <= mid)
          {
                    temp.push_back(arr[i]);
                    i++;
          }

          while (j <= end)
          {
                    temp.push_back(arr[j]);
                    j++;
          }

          for (int idx = 0; idx < temp.size(); idx++)
          {
                    arr[idx + st] = temp[idx];
          }
}

void mergeSort(vector<int> &arr, int st, int end) // O(logn)
{
          if (st < end)
          {
                    int mid = st + (end - st) / 2;

                    mergeSort(arr, st, mid);

                    mergeSort(arr, mid + 1, end);

                    merge(arr, st, end, mid);
          }
}

// overall time complexity -> O(nlogn)

int main()
{

          vector<int> arr = {12, 65, 43, 23, 76};

          mergeSort(arr, 0, arr.size() - 1);

          for (int val : arr)
          {
                    cout << val << " ";
          }

          cout << endl;

          return 0;
}