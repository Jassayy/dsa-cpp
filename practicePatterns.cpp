#include <bits/stdc++.h>
using namespace std;

int minSubArrayLen(int target, vector<int> &nums)
{
       int i = 0, j = 0, len, minLen = INT_MAX, sum = 0, n = nums.size();

       while (j < n)
       {
              sum += nums[j]; // keep adding nums[j] to sum

              while (sum >= target)
              {
                     len = j - i + 1;
                     minLen = min(len, minLen);
                     sum -= nums[i];
                     i++;
              }
              j++;
       }

       if (minLen == INT_MAX)
              return 0;

       return minLen;
}


int characterReplacement(string s, int k) {
        vector<int> freq(26, 0); // frequency of each character
        int left = 0, maxCount = 0, ans = 0;

        for (int right = 0; right < s.size(); right++) {
            freq[s[right] - 'A']++;
            maxCount = max(maxCount, freq[s[right] - 'A']);

            // If replacements needed > k, shrink window
            while ((right - left + 1) - maxCount > k) {
                freq[s[left] - 'A']--;
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }

int main()
{
       ios::sync_with_stdio(false);
       cin.tie(nullptr);

       // your code here
       string s = "ABAB";

       int k = 2;

       cout << characterReplacement(s , k);

       return 0;
}