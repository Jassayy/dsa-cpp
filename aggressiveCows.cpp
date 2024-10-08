#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(vector<int> &arr, int n, int c, int minimumAllowedDistance)
{
      int cows = 1, lastPosition = arr[0];

      for (int i = 1; i < n; i++)
      {
            if (arr[i] - lastPosition >= minimumAllowedDistance)
            {
                  cows++;
                  lastPosition = arr[i];
            }

            if (cows == c)
            {
                  return true;
            }
      }

      return false;
}

int aggressiveCows(vector<int> &arr, int n, int c)
{

      // sort the array
      sort(arr.begin(), arr.end());

      int st = 1, end = arr[n - 1] - arr[0];
      int ans = -1;

      while (st <= end)
      {
            int mid = st + (end - st) / 2;

            if (isPossible(arr, n, c, mid))
            {
                  ans = mid;
                  st = mid + 1;
            }
            else
            {
                  end = mid - 1;
            }
      }
      return ans;
}

int main()
{

      vector<int> stalls = {1, 2, 8, 4, 9};
      int n = stalls.size(), c = 3;

      cout << aggressiveCows(stalls, n, c) << endl;
      return 0;
}