#include <iostream>
#include <climits>
#include <vector>
using namespace std;

// kadans algorithm
int maxSubArray(vector<int> &nums)
{
      int currSum = 0, maxSum = INT_MIN;

      for (int val : nums)
      {
            currSum += val;
            maxSum = max(currSum, maxSum);
            if (currSum < 0)
            {
                  currSum = 0;
            }
      }

      return maxSum;
}
int main()
{
      int n = 5;
      int arr[5] = {1, 2, 3, 4, 5};

      int maxSum = INT_MIN;

      for (int start = 0; start < n; start++)
      {
            int currentSum = 0;
            for (int end = start; end < n; end++)
            {
                  currentSum += arr[end];
                  maxSum = max(maxSum, currentSum);
            }
      }
      cout << "Max subArray sum: " << maxSum << endl;

      return 0;
}