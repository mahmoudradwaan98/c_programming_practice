#include <stdio.h>
#include <string.h>
 
/* 

	c Function to reverse the string using pointers , Iteration approach

*/
void reverseString(char* str)
{

    char *begin_ptr, *end_ptr, temp;
 
    // Get the length of the string
    int length = strlen(str);
 
    // Setting the begin_ptr to start of string
    begin_ptr = str;
   
    //Setting the end_ptr the end ofthe string
    end_ptr = str + length - 1;
 
    // Swap the char from start and end index using begin_ptr and end_ptr
    for (int i = 0; i < (length - 1) / 2; i++) {
 
        // swap character
        temp = *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = temp;
 
        // update pointers positions
        begin_ptr++;
        end_ptr--;
    }
}
// Driver code
int main()
{
 
    // Get the string
    char str[100] = "Hello Everyone";
    printf("Enter a string: %s\n", str);
 
    // Reverse the string
    reverseString(str);
 
    // Print the result
    printf("Reverse of the string: %s\n", str);
 
    return 0;
}
// ######################################################### //

/*


C program to reverse a string using recursion approach


*/
# include <stdio.h>
  
/* Function to print reverse of the passed string */
void reverse(char *str)
{
   if (*str)
   {
       reverse(str+1);
       printf("%c", *str);
   }
}
  
/* Driver program to test above function */
int main()
{
   char str[] = "Hello Everyone";
   reverse(str);
   return 0;
}
// ######################################################### //

/*


C program to reverse a string using recursion , Efficient Approach: 

We can store each character in recursive stack and then can print while coming back


*/

#include <stdio.h>
  
/* Function to print reverse of the passed string */
void reverse(char *str, int index, int n)
{
    if(index == n)   // return if we reached at last index or at the end of the string
    {
        return;
    }
    char temp = str[index]; // storing each character starting from index 0 in function call stack;
    reverse(str, index+1, n); // calling recursive function by increasing index everytime
    printf("%c", temp);          // printing each stored character while recurring back
}
  
/* Driver program to test above function */
  
int main() {
  
    char a[] = "Hello Everyone";
    int n = sizeof(a) / sizeof(a[0]);
    reverse(a, 0, n);
    return 0;
}
