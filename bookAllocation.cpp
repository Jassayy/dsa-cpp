// hard level question
#include <iostream>
#include <vector>

using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages)
{
      int stu = 1, pages = 0;

      for (int i = 0; i < n; i++)
      {
            if (arr[i] > maxAllowedPages)
            {
                  return false;
            }

            if (pages + arr[i] <= maxAllowedPages)
            {
                  pages += arr[i];
            }
            else
            {
                  stu++;
                  pages = arr[i];
            }
      }

      return stu > m ? false : true;
}

int allocateBooks(vector<int> &arr, int n, int m)
{
      if (m > n)
      {
            return -1;
      }
      int sum = 0;
      for (int i = 0; i < n; i++)
      {
            sum += arr[i];
      } // sum of all pages i.e maximum number of pages that can be alloted

      // range of all possible answers and apply binary_search on this range
      int st = 0, end = sum;
      int ans = -1;

      while (st <= end)
      {
            int mid = st + (end - st) / 2; // mid value

            if (isValid(arr, n, m, mid))
            {
                  ans = mid;

                  // mid is valid so check in the left for minimum possible value
                  end = mid - 1;
            }
            else
            {
                  // mid is invalid so check in the right for minimum possible value
                  st = mid + 1;
                  ans - mid;
            }
      }
      return ans;
}

int main()
{
      vector<int> arr = {2, 1, 3, 4};
      int n = arr.size(), m = 2;

      cout << allocateBooks(arr, n, m) << endl;
      return 0;
}