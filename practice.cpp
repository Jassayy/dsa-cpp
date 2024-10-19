#include <iostream>
#include <vector>

using namespace std;

vector<int> removeElement(vector<int> arr, int val)
{
      int i = 0;
      vector<int> elements;
      while (i < arr.size())
      {
            if (arr[i] != val)
            {
                  elements.push_back(arr[i]);
            }
            i++;
      }

      for(int i = 0 ; i < elements.size() ; i++){
            arr[i] = elements[i];
      }
      return elements.size();
}
int main()
{
      vector<int> arr = {1, 3, 5, 4, 6, 5};
      int val = 5;

      vector<int> result = removeElement(arr, val);

      for (int i = 0; i < result.size(); i++)
      {
            cout << result[i] << " "; // Output: 1 3 4 6  (All occurrences of 5 are removed)
      }
      return 0;
}