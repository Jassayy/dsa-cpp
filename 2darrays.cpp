#include <iostream>
#include <climits>
#include <vector>

using namespace std;

// pair<int, int> linearSearch(int matrix[][3], int rows, int cols, int key)
// { // column number should be compulsorily defined in params

//       pair<int, int> p;

//       for (int i = 0; i < rows; i++)
//       {
//             for (int j = 0; j < cols; j++)
//             {
//                   if (matrix[i][j] == key)
//                   {
//                         return {i, j};
//                   }
//             }
//       }

//       return {-1, -1}; // key not found
// }

// int main()
// {

//       int matrix[4][3]; // 2D array
//       // early initialization of array
//       int matrix2[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}}; //{{first row} , {second row} , etc etc}

//       // getting the size of the 2d array dynamically using variables

//       // initialize the elements of dynamic 2d array
//       int rows = 4; // always define the rows and columns too after initialization of 2d array
//       int cols = 3;

//       // replacing elements
//       //  matrix2[2][1] = 18;

//       // loops on 2d array

//       // cout << matrix2[2][1] << endl;

//       // for (int i = 0; i < rows; i++){
//       //       for(int j = 0 ; j < cols; j++){
//       //             cout << matrix2[i][j] << " ";
//       //       }
//       //       cout << endl;
//       // }

//       // for taking input in 2d arrays

//       //  linear search on 2d array

//        pair<int , int> result = linearSearch(matrix2, rows, cols, 8);

//        cout << result.first << " " << result.second << endl;

//       return 0;
// }

// int getMaxSum(int mat[][3], int rows, int cols)
// {

//       int maxRowSum = INT_MIN;

//       for (int i = 0; i < rows; i++)
//       {
//             int sum = 0;

//             for (int j = 0; j < cols; j++)
//             {

//                   sum += mat[i][j];
//             }

//             maxRowSum = max(maxRowSum, sum);
//       }
//       return maxRowSum;
// }

// diagonal sum

// int diagonalSum(int mat[][3], int n)
// {
//       int sum = 0;

      // time complexity = n*n

      // for (int i = 0; i < n; i++)
      // {
      //       for (int j = 0; j < n; j++)
      //       {
      //             if (i == j)
      //             {
      //                   sum += mat[i][j];
      //             }
      //             else if (j == n - 1 - i)
      //             {
      //                   sum += mat[i][j];
      //             }
      //       }
      // }

      // optimized
      // pd => i = j

//       for (int i = 0; i < n; i++)
//       {
//             sum += mat[i][i];

//             if (i != n - i - 1)
//             {
//                   sum += mat[i][n - i - 1];
//             }
//       }

//       return sum;
// }

int main()
{

      //2d vector

      vector<vector<int>> mat;
     

      return 0;
}
