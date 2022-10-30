#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
std::vector<int> arr;
using namespace std;



/********** Reverse array in groups    **********/
// Adobe

// Input: N = 5, K = 3
// arr[] = {1,2,3,4,5}
// Output: 3 2 1 5 4
// Explanation: First group consists of elements
// 1, 2, 3. Second group consists of 4,5.

// int main(){
    
//    int arr[] = {5,8,9,0,3,2};
//    int n = sizeof(arr) /sizeof(arr[0]);
//    int k = 3;

//       for (int i = 0; i < n; i = i+k)
//       {
//         int start = i, end = min(i+k-1, n-1);
//         int temp;
//        while (start < end)
//             {
//                     temp = arr[start];
//                     arr[start] = arr[end];
//                     arr[end]=temp ;

//                     start++;
//                     end--;
//             }
//       }

//       for (int i = 0; i <n; i++)
//       {
//         cout<<" "<<arr[i];
//       }
      
      
   
   

//     return 0;
// }





/********** Find triplets with zero sum Given an array arr[] of n integers. 
 * Check whether it contains a triplet that sums up to zero.**********/


// Input: n = 5, arr[] = {0, -1, 2, -3, 1}
// Output: 1
// Explanation: 0, -1 and 1 forms a triplet
// with sum equal to 0.

int main(){
    
    int arr[] = {0, -1, 2, -3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
      
                for (int i = 0; i < n; i++)
                {
                    for (int j = i+1; j < n; j++)
                    {
                        for (int k = j+1; j < n; k++)
                        {
                            if(arr[i]+arr[j]+arr[k] == 0){
                                return true;
                            }
                        }
                        
                    }
                    
                }

                return false;
                
}