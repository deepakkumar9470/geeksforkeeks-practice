#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <limits.h>
#include<stdlib.h>
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








// Input: n = 5, arr[] = {0, -1, 2, -3, 1}
// Output: 1
// Explanation: 0, -1 and 1 forms a triplet
// with sum equal to 0.

// int main(){
    
//     int arr[] = {0, -1, 2, -3, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);
      
//                 for (int i = 0; i < n; i++)
//                 {
//                     for (int j = i+1; j < n; j++)
//                     {
//                         for (int k = j+1; j < n; k++)
//                         {
//                             if(arr[i]+arr[j]+arr[k] == 0){
//                                 return true;
//                             }
//                         }
                        
//                     }
                    
//                 }

//                 return false;
                
// }




/********** Trapping Rain Water **********/




// int main(){
   
//     int arr[] =  {3, 0, 2, 0, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int water = 0;

//     int leftmax = arr[0];
//     int righttmax = arr[n-1];
//     int low = 0;
//     int high = n-1;

//     while (low <=high )
//     {
//          if(arr[low] <= arr[high]){

//             leftmax = max(leftmax, arr[low]);
//             water += leftmax -arr[low];
//             low++;
//          }else{
//             righttmax = max(righttmax , arr[high]);
//             water += righttmax - arr[high];
//             high--;
//          }
//     }
//     cout<<water;
    
//     return 0;   
// }


 


 /**********  First and last occurrences of x   **********/
// Amazon

// Input: n=9, x=5
// arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
// Output:  2 5
// Explanation: First occurrence of 5 is at index 2 and last
//              occurrence of 5 is at index 5. 

// Run a for loop and for i = 0 to n-1
// Take first = -1 and last = -1 
// When we find an element first time then we update first = i 
// We always update last=i whenever we find the element.
// We print first and last


//  int main(){
    
//     int arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 };
//     int n = sizeof(arr) / sizeof(arr[0]);

//      int x = 5;
//      int first = -1, last = -1;
//     for (int i = 0; i < n; i++) {
//         if (x != arr[i])
//             continue;
//         if (first == -1)
//             first = i;
//         last = i;
//     }
//     if (first != -1)
//         cout << " "<< first << " " << last;
//     else
//         cout << "Not Found";
//     return 0;
//  }



/********** Pythagorean Triplet: Given an array arr of N integers, write a function that
 *  returns true if there is a triplet (a, b, c) that  satisfies a2 + b2 = c2, otherwise false.   **********/

// Amazon , Adobe

// Input:  N = 5
// Arr[] = {3, 2, 4, 6, 5}
// Output: Yes
// Explanation: a=3, b=4, and c=5 forms a
// pythagorean triplet.


// int main(){

//     int arr[] = {3,4,5};

//     int n = sizeof(arr) / sizeof(arr[0]);

//     int a, b, c;
//     cin>>a>>b>>c;
   
//     int max = a;

//     if(b > max) max = b;
//     if(c> max) max = c;

//     if(max == a){
//        if( (a*a) == (b*b + c*c)){
//           cout<<"Yes";
//        }else{
//         cout<<"No";
//        }

//     }else if(max == b){
//          if( (b*b) == (a*a + c*c)){
//           cout<<"Yes";
//        }else{
//         cout<<"No";
//        }

//     }else if(max == c){
//     if( (c*c) == (a*a + b*b)){
//             cout<<"Yes";
//         }else{
//             cout<<"No";
//        }
//     }


//     return 0 ;
// }








/**********Minimum distance between two numbers:
 * You are given an array A, of N elements. 
 * Find minimum index based distance between two elements of the array, x and y.    **********/

// Amazon , Paytm

// Input: N = 4 ,   A[] = {1,2,3,2}
// x = 1, y = 2
// Output: 1
// Explanation: x = 1 and y = 2. There are
// two distances between x and y, which are
// 1 and 3 out of which the least is 1.


// int main(){

//         int arr[] = {4 ,2 ,1, 5, 3};

//         int n = sizeof(arr) / sizeof(arr[0]);
        
//          for (int i = 0; i < n; i++)
//          {
//             if(arr[i] >  arr[i+1]){
//                 arr[i] = arr[i+1];

//             }else{
//                 arr[i] = -1;
//             }
//          }
         
//         arr[n-1] = -1;
         
//         for (int i = 0; i < n; i++)
//         {
//             cout<<arr[i]<<" ";
//         }
         

//         return 0;
// }




/********** Minimum distance between two numbers:
You are given an array A, of N elements. Find minimum index based distance between two elements of the array, 
x and y.  **********/
// Amazon , Paytm

// Input: N = 4
// A[] = {1,2,3,2}
// x = 1, y = 2
// Output: 1
// Explanation: x = 1 and y = 2. There are
// two distances between x and y, which are
// 1 and 3 out of which the least is 1.




// int main(){
     
//      int A[] = {1,2,3,2};
//      int n  = sizeof(arr) / sizeof(arr[0]);

//      int x = 1, y= 2;
//      int prev = -1; // represent not any data or value
//      int dist = INT_MAX; // represent max value

//      for (int i = 0; i < n; i++)
//      {
//         if( arr[i] == x || arr[i] == y){
          
//           if(prev != -1 && arr[prev] != arr[i]){
//             dist  = min(dist, i-prev);
//           }
//           prev = i;
//         }
//      }
     

//       return dist == INT_MAX ? -1 : dist;

//     return 0;
// }






/********** Rotating an Array
 Given an array of size N. The task is to rotate array by D elements where D ≤ N.
   **********/

// Codenation

// Input: N = 7
// Arr[] = {1, 2, 3, 4, 5, 6, 7}
// D = 2
// Output: 3 4 5 6 7 1 2
// Explanation: 
// Rotate by 1: [2, 3, 4, 5, 6, 7, 1]
// Rotate by 2: [3, 4, 5, 6, 7, 1, 2]

// void reverseArr(int arr[], int low, int high){

//     while (low < high)
//     {
//         swap(arr[low], arr[high]);
//         low ++;
//         high--;
//     }
    
// }


// int main(){
//      int arr[] = {1, 2, 3, 4, 5, 6, 7};
//      int n  = sizeof(arr) / sizeof(arr[0]);

//      int d = 3;
      
//      reverseArr(0,n-d-1,0);
     

//      return 0;

// }




/********** Convert array into Zig-Zag fashion  **********/

// Amazon , Paytm
// Input: N = 7 Arr[] = {4, 3, 7, 8, 6, 2, 1}
// Output: 3 7 4 8 2 6 1
// Explanation: 3 < 7 > 4 < 8 > 2 < 6 > 

// int main(){
//   int arr[] = {4, 3, 7, 8, 6, 2, 1};
//   int n = sizeof(arr) / sizeof(arr[0]);

//   bool greater = false;

//   for (int i = 0; i < n; i++)
//   {
//       if((greater && arr[i] <  arr[i+1]) || (!greater && arr[i] >  arr[i+1])){
//         swap(arr[i], arr[i+1]);
//       }

//       if(greater) greater = false;
//       else greater = true; 
//   }

  

//   return 0;
// }





/********** Third largest element  **********/
// Amazon , Microsoft
// Input: N = 5 , A[] = {2,4,1,3,5} ,Output: 3

// int main(){
//   int arr[] = {2,4,1,3,5};
//   int n = sizeof(arr) / sizeof(arr[0]);

//       int firstLarge = max(arr[0],arr[1]);
//       int secLarge = min(arr[0],arr[1]);
//       int thirdLarge=INT_MIN;


//       for(int i=2;i<n;i++)
//             {
        
//               if(arr[i]>thirdLarge)
//               {
//                       thirdLarge = arr[i];
//               }
//               if(arr[i]>secLarge)
//               {
//                   thirdLarge = secLarge;
//                   secLarge = arr[i];
//               }
//               if(arr[i]>firstLarge)
//               {
//                   secLarge = firstLarge;
//                   firstLarge = arr[i];
//               }
//             }

//         cout<<thirdLarge;

//   return 0;
// }





/********** Replace all 0's with 5 **********/
// Amazon
// Input: N = 1004,  Output: 1554
// Explanation: There are two zeroes in 1004
// on replacing all zeroes with "5", the new
// number will be "1554".

// int convert(int num){

//   if(num == 0){
//     return 5;
//   }

//   return convert(num);
// }
// int main(){
   
//    int N = 1004;
//    int digit  = N % 10;
//    if(digit){
//     digit = 5;
//    }

//    return convert(N/10) * 10 + digit;

  
// }






/********** Elements in the Range 
  Given an array arr[] containing positive elements. A and B are two numbers defining a
   range.The task is to check if the array contains all elements in the given range.**********/

// Amazon

// Input: N = 7, A = 2, B = 5, arr[] =  {1, 4, 5, 2, 7, 8, 3}
// Output: Yes
// Explanation: It has elements between 
// range 2-5 i.e 2,3,4,5



// int main(){

//   int arr[] =  {1, 4, 5, 2, 7, 8, 3};
//   int n = sizeof(arr) / sizeof(arr[0]);

  
//   int A = 2, B = 7;

//     int range = B-A;
// 		for (int i = 0; i < n; i++) {

// 			if ((abs(arr[i])) >= A && (abs(arr[i])) <= B) {

// 				int z = abs(arr[i]) - A;
// 				if (z<n && arr[z] > 0) {
// 					arr[z] = arr[z] * -1;
// 				}
// 			}
// 		}
// 		int count=0;
// 		for (int i = 0; i <= range && i<n; i++) {

// 			if (arr[i] > 0)
// 				return false;
// 			else
// 				count++;
// 		}
// 		if(count!= (range+1))
// 			return false;
      
// 		// return true;

//     cout<<range<<endl;


// }


/********** Sort an array of 0s, 1s and 2s : Given an array of size N containing only 0s, 1s, and 2s; 
    sort the array in ascending order. **********/

// Amazon , Adobe

// Input:  N = 5
// arr[]= {0 2 1 2 0}
// Output:
// 0 0 1 2 2
// Explanation:
// 0s 1s and 2s are segregated 
// into ascending order.

// int main(){  
//   int arr[]= {0 ,2 ,1, 2, 0};
//   int n = sizeof(arr) / sizeof(arr[0]);
   
//    int low = 0;
//    int mid = 0;
//    int high = n-1;

//     while (mid<=high)
//     {
//        if(arr[mid] == 0){
//         swap(arr[low], arr[mid]);
//         low++;
//         mid++;
//        }
//        else if(arr[mid] == 1){
//            mid++;
//        }
//        else{
//         swap(arr[mid], arr[high]);
//         high--;
//        }
//     }
    
//    for (int i = 0; i < n; i++)
//    {
//       cout<<arr[i]<<" ";
//    }
   
// }



/********** Find duplicates in an array **********/
// Amazon , D-E-SHAW

// Input:  N = 4,  a[] = {0,3,1,2}
// Output: -1
// Explanation: N=4 and all elements from 0
// to (N-1 = 3) are present in the given
// array. Therefore output is -1.

// int main(){

//   int arr[]= {0 ,2 ,1, 2, 0};
//   int n = sizeof(arr) / sizeof(arr[0]);

//          for(int i=0;i<n;i++){
             
//              int index = arr[i] % n;
//              arr[index] += n;
//          }

//          vector<int> ans;
         
//          for(int i=0;i<n;i++){
//               if(arr[i] / n > 1){
//                   ans.push_back(i);
                  
//               }
//          }
//          if(ans.size()==0) return {-1};
//         return ans;
// }



/********** Peak Element
 An element is called a peak element if its value is not smaller than the value of its adjacent elements(if they exists).
Given an array arr[] of size N, Return the index of any one of its peak elements.
Note: The generated output will always be 1 if the index that you return is correct. Otherwise output will be 0. 
 **********/

// Amazon , Adobe


// Input:  N = 3, arr[] = {1,2,3}
// Possible Answer: 2
// Generated Output: 1
// Explanation: index 2 is 3.
// It is the peak element as it is 
// greater than its neighbour 2.
// If 2 is returned then the generated output will be 1 else 0


// int main(){

//   int arr[] = {1,2,3};
//   int n = sizeof(arr) / sizeof(arr[0]);

//   int low = 0;
//   int high = n-1;
//   while (low <= high)
//   {
//     int mid = (low+high)/2;

//     if((mid == 0 || arr[mid] >= arr[mid-1]) && (mid == 1 || arr[mid] >= arr[mid+1])){
//       return mid;
//     }else if(arr[mid] <= arr[mid+1]){
//       low = mid+1;
//     }else{
//         high = mid-1;
//     }
//   }

//   cout<<arr<<" ";
  


//   return 0;
// }
