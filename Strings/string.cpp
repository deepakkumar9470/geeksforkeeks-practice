#include<iostream>
#include <string>
#include <math.h>
#include <vector>

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

//     string str = "hello";
//     int n   = str.length();

//     string vowel="";
//     for (int i = 0; i < n; i++)
//     {
//         if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
//              vowel +=str[i];
//              str[i] = '.';
//         }
//     }

//      int i = str.length () - 1;
//      int j = 0;
//      while (i>=0)
//     {
//         if(str[i] ='.'){
//             str[i] = vowel[j++];
//             i--;
//         }
//     }
//     // return str;
//     return 0;
    
    
// }



/********** Upper case conversion (Convert each word into uppercase in string)  **********/
// Nagrro
// Input: str = "i love programming"
// Output: "I Love Programming"
// Explanation:
// 'I', 'L', 'P' are the first letters of 
// the three words.

// Javascript

// function upperStr(str){
      
//       str = str.split(' ')
//       for (let i = 0; i < str.length; i++)
//       {
//             str[i] = str[i][0].toUpperCase() +  str[i][0].substr(1)
//       }

//       return str;
      
// }


/********** Given a string. Count the number of Camel Case characters in it.  **********/

// Input: // S = "ckjkUUYII"
// Output: 5
// Explanation: Camel Case characters present:
// U, U, Y, I and I.


// int main(){
//     string str = "ckjkUUYII";

//     int count = 0;

//     for (int i = 0; i < str.length(); i++)
//     {
//         if(str[i] >= 'A' && str[i] <= 'Z'){
//             count++;
//         }
//     }
    

//     return count;
// }




/********** Remove vowels from string **********/

// Input: S = "welcome to geeksforgeeks"
// Output: wlcm t gksfrgks
// Explanation: Ignore vowels and print other
// characters 

// int main(){
//     string S = "welcome to geeksforgeeks";
  
    
//     vector<char> vowels=  {'a','e','o','o','u', 'A','E','I','O','U'};


//     for (int i = 0; i < S.length(); i++)
//     {
//         if(find(vowels.begin(), vowels.end(), S[i]) != vowels.end()){
//               S = S.replace(i, 1, "");
//             i -= 1;
//         }
//     }

//      return S;
// }






/********** Given a string, check if all its characters are same or not **********/

// Input: // s = "geeks"
// Output: NO
// Explanation: The string contains different
// character 'g', 'e', 'k' and 's'.


// int main(){
//    string s = "geeks";

//    char ch = s[0];

   
//    for(int i=1;i<s.size();i++){
       
//        if(s[i] != ch){
//            return false;
//        }
//    }
//    return true;

// }



/********** Count type of Characters **********/
// Amzon , Makemytrip

// Input: // S = "#GeeKs01fOr@gEEks07"
// Output:
// 5
// 8
// 4
// 2
// Explanation: There are 5 uppercase characters,
// 8 lowercase characters, 4 numeric characters
// and 2 special characters.
















/********** Remove characters from alphanumeric string **********/


// Input: S = "AA1d23cBB4"
// Output: 1234
// Explanation: Remove all chacactres 
// other than numbers

// int main(){
//     string s = "AA1d23cBB4";

//     int j = 0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if('0' <= s[i] && s[i] <='9'){
//               s[j++] = s[i];
//         }
//     }
    
//     return s.substr(0,j);
// }





