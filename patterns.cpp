#include <iostream>
using namespace std;

int main(){

      //square pattern
      int n;
      cout << "Enter the number of elements: ";
      cin >> n;

      // for(int i = 1 ; i <=n ; i++){
      //       for(int j=1 ; j<=n ; j++ ){
      //             cout<<j<<" ";
      //       }
      //       cout<<endl;
      // }

      //star square pattern
      //  for(int i = 0 ; i <=n-1 ; i++){
      //       for(int j=0 ; j<=n-1 ; j++ ){
      //             cout<<"*"<<" ";
      //       }
      //       cout<<endl;
      // }

      //can do this with characters too
      // for(int i = 0 ; i <=n-1 ; i++){
      //       char ch = 'A';
      //       for(int j=0 ; j<=n-1 ; j++ ){
      //             cout<<ch;
      //             ch++;
      //       }
      //       cout<<endl;
      // }


      //123
      //456 this pattern
      //789

      // int num = 1;
      //  for(int i = 0 ; i <n ; i++){
      //       for(int j = 0 ; j < n ; j++){
      //             cout<< num << "  " ;
      //             num++;
      //       }
      //       cout<<endl;
 
      // }

      //triangle pattern

      // for(int i = 0 ; i<=n ; i++){
      //       for(int j = 0 ; j < i ; j++){
      //             cout<<"*"<< " ";
      //       }
      //       cout<<endl;
      // }

    //traingle pattern for numbers
//     for(int i = 0 ; i<n ; i++){
//             for(int j = 0 ; j < i+1 ; j++){
//                   cout<<(i+1)<< " ";
//             }
//             cout<<endl;
//       }

      //same with characters
  

      // for(int i = 0 ; i<n ; i++){
      //       char ch = 'A';
      //       for(int j = 0 ; j < i+1 ; j++){
      //             cout<<ch<< " ";
      //             ch++;
      //       }
      //       cout<<endl;
      // }

      //  for(int i = 0 ; i<n ; i++){
      //       for(int j = 1 ; j < i+1 ; j++){
      //             cout<<j<< " ";
      //       }
      //       cout<<endl;
      // }


      //numbers reversed triangle pattern

      // for(int i = 0; i<n ; i++){
      //       for(int j = i+1 ; j >  0; j--){
      //             cout<<j;
      //       }
      //       cout<<endl;
      // }

//inverted triangle

      // for(int i = 0 ; i< n ; i++){
      //       for(int j = 0 ; j < i ; j++){
      //             cout<<" ";
      //       }
           
      //      for(int j = 0 ; j< n-i ; j++){
      //       cout<<(i+1);
      //      }
      //      cout<<endl;
      // }


      // for(int i = 0 ; i< n ; i++){
      //             for(int j = 0 ; j < i ; j++){
      //                   cout<<" ";
      //             }
            
      //       for(int j = 0 ; j< n-i ; j++){
      //             cout<<(i+1)<<" ";
      //       }
      //       cout<<endl;
      //       }
      

      //pyramid pattern

            for(int i = 0 ; i< n ; i++){
                  for(int j = 0 ; j < n-i-1 ; j++){
                        cout<< " ";
                  }

                  for(int j = 1 ; j<=i+1 ; j++){
                        cout<< j;
                  }

                  for(int j= i;j>0 ; j--){
                        cout<< j;
                  }

                  cout<<endl;
            }

      return 0;

     
}