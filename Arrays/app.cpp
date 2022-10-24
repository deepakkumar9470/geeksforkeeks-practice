#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
std::vector<int> arr;
using namespace std;

/********** Find 2nd largest number in array**********/

// int main(){
//     int arr[] = {12 ,35 ,1 ,10, 34, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     for (int i = n-2; i>=0; i--)
//     {
//         if(arr[i] !=  arr[arr[n-1]]){
//            cout<<arr[i]<<endl;
//         }
//     }

//     return 0;
// }

/********** Value equal to index value in array**********/
// Input:
// N = 5
// Arr[] = {15, 2, 45, 12, 7}
// Output: 2
// Explanation: Only Arr[2] = 2 exists here.

// int main(){
//     int arr[] = {15, 2, 45, 12, 7};
//     vector <int> A[5];
//     int n = sizeof(arr) / sizeof(arr[0]);

//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i] == i+1){
//             A.add(arr[i]);
//         }
//     }

//     cout<<A<<endl;

//     return 0;
// }

/********** Print alternate elements of an array **********/

// Input: N = 4 , A[] = {1, 2, 3, 4}
// Output: 1 3

// int main(){

//    int arr[] = {2,4,6,7,1,0};

//    int n = sizeof(arr) /  sizeof(arr[0]);

//    for (int i = 0; i < n; i = 1 + 2)
//    {
//         cout<<arr[i]<<" ";
//    }

//     return 0;
// }

/********** Write a program to find the sum of the given
            series 1+2+3+ . . . . . .(N terms) **********/

// int main(){

//     int n;
//     cin>>n;
//     int sum = 0;

//      for (int i = 0; i <=n; i++)
//      {
//          sum = sum + i;
//      }

//     cout<<sum<<" ";
//     return 0;
// }

/********** Palidromic array **********/
// Input 5 : [111, 222, 333, 444, 555]
// return 1 because all item are palindromic
// return 0 if not

// int main(){

//     int arr[] ={2,3,4,5,2};

//     int n = sizeof(arr) / sizeof(arr[0]);

//     	for(int i =0 ; i<n/2;i++ ){

//     	    if(arr[i] != arr[n-1-i]){
//     	        cout<<0;
//     	    }
//     	}

//     	cout<<1;
//     return 0 ;
// }

/**********
 * Given an array of N integers. Your task is to print
 * the sum of all of the integers. **********/

// int main()
// {

//     int n;
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {

//         cin >> arr[i];
//     }

//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {

//         sum = sum + arr[i];
//     }

//     cout << sum << " ";

//     return 0;
// }






/********** Find number of elements which are less than or equal to given element X.  **********/

// N = 6
// A[] = {1, 2, 4, 5, 8, 10}
// X = 9
// Outpt:  5 because 1,2,3,4,5 less than 9


// int countOfElements(int arr[], int n, int x)
// {
 
//     int i = 0;
 
//     for (i = 0; i < n; i++) {
//         if (arr[i] > x)
//             break;
//     }
 
//     return i;
// }
// int main(){
    
//    int arr[] = {1, 2, 4, 5, 8, 10};
//    int n = sizeof(arr)/sizeof(arr[0]);

//    int X = 9;

//     cout<<countOfElements(arr,n,X);
   
//     return  0;
// }




/********** Given an array Arr of size N, swap the Kth element 
from beginning with Kth element from end. **********/

// Input:
// N = 8, K = 3
// Arr[] = {1, 2, 3, 4, 5, 6, 7, 8}
// Output: 1 2 6 4 5 3 7 8
// Explanation: Kth element from beginning is
// 3 and from end is 6.

// int main(){
   
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     int k = 3;


//     for (int i = 0; i < n; i++)
//     {

//             // if(arr[i])
       
//     }
    
    
    
//     return 0;

// }




/********** Given an array A[] of N integers and an index Key.
 Your task is to print the element present at index key in the array.
 **********/

// Input:
// 5 2
// 10 20 30 40 50
// Output:
// 30

// int main(){
   
//     int arr[] = {10 ,20, 30, 40, 50};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     int k = 2;

//     cout<<arr[k];

//     return 0;

// }



/*********** Display largest name **********/

// Input:
// N = 5
// names[] = { "Geek", "Geeks", "Geeksfor","GeeksforGeek", "GeeksforGeeks" }
// Output:
// GeeksforGeeks


// int main(){
    
//     string names[] = { "Geek", "Geeks", "Geeksfor","GeeksforGeek", "GeeksforGeeks" };
    
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int max_length = 0;

//     for (int i = 0; i < n; i++)
//     {
//            if(names[i].length() >  names[max_length].length()){
//                 max_length = i;
//                 return names[max_length];
//            }
//     }

//     return 0;
// }




/**********  Perfect Array  ***********/

// Input : Arr[] = {1, 2, 3, 2, 1}
// Output : PERFECT
// Explanation:
// Here we can see we have [1, 2, 3, 2, 1] 
// if we reverse it we can find [1, 2, 3, 2, 1]
// which is the same as before.
// So, the answer is PERFECT.


// int main() {
 
//      int arr[] = { 1, 2, 3, 4, 5, 5 };
//      int n = sizeof(arr) / sizeof(arr[0]);
     
//      int start = 0;
//      int end = n-1;
     
//      while(start <  end){
//            swap(arr[start], arr[end]);
//            start++;
//            end--;
//      }
//      for(int i = 0;i<n;i++){
//          cout<<arr[i]<<" ";
//      }
     
                
            
//     return 0;
// }





int main() {
 
     int arr[] = { 1, 2, 3, 4, 5, 5 };
     int n = sizeof(arr) / sizeof(arr[0]);
     
     for (int i = 0; i < n/2; i++)
     {
        if(arr[i] != arr[n-1-i]){
            return false;
        }
     }
     return true;

}