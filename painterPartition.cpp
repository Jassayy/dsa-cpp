#include <iostream>
#include <vector>

using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxTime)
{
      int painter = 1, boards = 0;

      for (int i = 0; i < n; i++)
      {
            if (arr[i] > maxTime)
            {
                  return false; // if any board time is greater than maxTime, return false
            }

            if (boards + arr[i] <= maxTime)
            {
                  boards += arr[i];
            }
            else
            {
                  painter++;
                  boards = arr[i];
            }
      }
      return painter > m ? false : true;
}

int painterPartition(vector<int> &arr, int n, int m)
{
      if (m > n)
      {
            return -1;
      }

      int sum = 0;

      for (int i = 0; i < n; i++)
      {
            sum += arr[i]; // sum of all the time taken
      }

      int start = 0, end = sum; // range of all time taken, our answer lies here..apply binary search here

      int ans = -1;
      while (start <= end)
      {
            int mid = start + (end - start) / 2;

            if (isValid(arr, n, m, mid))
            {
                  ans = mid; // update answer if valid partition found
                  end = mid - 1;
            }
            else
            {
                  start = mid + 1;
            }
      }
      return ans;
}

int main()
{
      vector<int> arr = {40, 30, 10, 20};

      int n = arr.size(), m = 2;

      // in this case answer should be 20

      cout << painterPartition(arr, n, m) << endl;

      return 0;
}