#include <stdio.h>

/*


	little and big endian

	a character pointer c is pointing to an integer i. 

	Since size of character is 1 byte when the character pointer is de-referenced 

	it will contain only first byte of integer. If machine is little endian then *c will be 1 
	(because last byte is stored first)  and if the machine is big endian then *c will be 0.

*/

int main()
{
   unsigned int i = 1;
   char *c = (char*)&i;
   if (*c)   
       printf("Little endian");
   else
       printf("Big endian");
   getchar();
   return 0;
}

/*



*/
  
/* function to show bytes in memory, from location start to start+n*/
void show_mem_rep(char *start, int n)
{
    int i;
    for (i = 0; i < n; i++)
         printf(" %.2x", start[i]);
    printf("\n");
}
  
/*Main function to call above function for 0x01234567*/
int main()
{
   int i = 0x01234567;
   show_mem_rep((char *)&i, sizeof(i));
   getchar();
   return 0;
}














