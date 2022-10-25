#include<iostream>
#include <string>

using namespace std;




/********** Check for Binary **********/

// Input:
// str = 101
// Output:
// 1
// Explanation:
// Since string contains only 0 and 1, output is 1.

// int main(){
   
//    string str = "101";

//    for (char i = 0; i < str.size(); i++)
//    {
//       if(str[i] != '0' && str[i] != '1'){
//         return false;
//       }
//    }

//    return true;
   
// }

/********** Remove Spaces between string **********/


// "geeks for geeks"
// "geeksforgeeks"

// int main(){

//     string str ="geeks for geeks";
    
//     int n = str.length();
//     int i=0;
//     int itr = 0;

//     while (i < n)
//     {
//         if(str[i] != ' '){
//             str[itr++] = str[i];
//         }
//         i++;

//     }
//     return str.substr(0, itr);
    
   
// }


/********** Reversing a string **********/

// Input : "deepak" ---> "kapeed"

// int main(){

//     string str = "deepak";
    
//     string res= "";

//     for (int i = str.length()-1; i>=0; i--)
//     {
//         res += str[i];
//     }

//     return res;
    
// }



/********** Reversing the vowels **********/
// Zoho , Flipkart

// Input:  S = "practice"
// Output: prectica
// Explanation: The vowels are a, i, e
// Reverse of these is e, i, a.

//  int main(){

//     string s = "practice";
//     string res ="";


//     for (int i = 0; i < s.length(); i++)
//     {
//         if(s[i] != 'a' || s[i] != 'e' || s[i] !='i' || s[i]!='o' || s[i]!='u'){
//               return false;
//         }else{

//             if(s[i] != s[s.length()-1-i]){
//                 res += s[i];
//             }
//         }
//     }
//     return res;
    
// }