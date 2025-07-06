#include <iostream>
#include <vector>

using namespace std;

// print all subset of array

// void printSubsets(vector<int> &arr , vector<int> &ans , int i)
// {
//           if(i == arr.size()){
//                     for(int val : ans){
//                               cout << val << " ";
//                     }
//                     cout << endl;
//                     return;
//           }

//           //to include
//           ans.push_back(arr[i]);
//           printSubsets(arr , ans , i+1);

//           //backtracking
//           ans.pop_back();

//           //exclude
//           printSubsets(arr , ans , i+1);

// }

// int main()
// {

//           vector<int> arr = {1, 2, 3};
//           vector<int> ans; //to store subsets

//           printSubsets(arr , ans , 0);

//           return 0;
// }

// RATS IN A MAZE PROBLEM

void helper(vector<vector<int>> &mat, int row, int col, string path, vector<string> &ans)
{
          // BASE CASE
          if (row < 0 || col < 0 || row >= mat.size() || col >= mat.size() || mat[row][col] == 0 || mat[row][col] == -1)
          {
                    return;
          }

          if (row == mat.size() - 1 && col == mat.size() - 1)
          {
                    ans.push_back(path);
                    return;
          }

          mat[row][col] = -1;

          // down
          helper(mat, row + 1, col, path + 'D', ans);
          // up
          helper(mat, row - 1, col, path + 'U', ans);
          // left
          helper(mat, row, col - 1, path + 'L', ans);
          // right
          helper(mat, row, col + 1, path + 'R', ans);\

          mat[row][col] = 1;
}

vector<string> findPath(vector<vector<int>> &mat)
{
          int n = mat.size();

          vector<string> ans;
          string path = "";
          helper(mat, 0, 0, path, ans);

          return ans;
}

int main()
{

          vector<vector<int>> mat = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};

          vector<string> ans = findPath(mat);

          for (string path : ans)
          {
                    cout << path << endl;
          }

          return 0;
}
