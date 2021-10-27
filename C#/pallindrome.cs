/*Q: How to find if the given string is a palindrome or not?
Ans.: The user will input a string and we need to print “Palindrome” or “Not Palindrome” based on whether the input string is a palindrome or not.

input: madam, output: Palindrome
input: step on no pets, output: Palindrome
input: book, output: Not Palindrome
if we pass an integer as string parameter then also this method will give the correct output

input: 1221, output: Palindrome
*/

internal static void chkPalindrome(string str)  
 {  
     bool flag = false;  
     for (int i = 0, j = str.Length - 1; i < str.Length / 2; i++, j--)  
     {  
         if (str[i] != str[j])  
         {  
             flag = false;  
             break;  
         }  
         else  
             flag = true;  
     }  
     if (flag)  
     {  
         Console.WriteLine("Palindrome");  
     }  
     else  
         Console.WriteLine("Not Palindrome");  
 }