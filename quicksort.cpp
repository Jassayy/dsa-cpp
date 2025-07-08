#include<iostream>
#include<vector>

using namespace std;

int partition(vector<int> &arr , int st ,int end){
          int idx = st - 1 , pivot = arr[end];

          for(int j = st ; j < end ; j++){
                    if(arr[j] <= pivot){
                              idx++;
                              swap(arr[j] , arr[idx]);
                    }
          }

          idx++;
          swap(arr[end] , arr[idx]);

          return idx;
}

void quickSort(vector<int> &arr , int st ,int end){
          if(st < end){
                    int pivotIdx = partition(arr , st , end);

                    quickSort(arr , st , pivotIdx - 1);

                    quickSort(arr , pivotIdx + 1 , end);
          }
}

int main(){
          vector<int> arr = {12,31,35,8,32,17};
          quickSort(arr , 0 , arr.size() - 1);

          for(int val  :arr){
                    cout << val << " ";
          }

          cout <<  endl;

          return 0;
}



/*unique concept based -> pivot and partition

pivot -> special index -> we will pick last index as pivot

steps : 
1. pick pivot
2. partition of array
3.(elements less than pivot) , pivot , (elememts greater than pivot)
4. repeated call quicksort for left and right halves

eg: [5,2,6,4,1,3]

pivot -> 3

elements less thn pivot are : 2 , 1 and more than pivot are 4 , 5, 6
so, arr now becomes (2,1) , 3 , (5,6,4)
not necessarily sorted

call quicksort for left and right halves now
left half [2,1] => pivot => 1
2 -> right of pivot
[1,2]

for right half pivot => 4 => [4,5,6]=> then same happens with [5,6] with 6 = pivot

backtrack and put array together

tc => O(nlogn) => in worst case O(n*n) => pivot => array's smallest/largest element
sc => O(n)
*/
