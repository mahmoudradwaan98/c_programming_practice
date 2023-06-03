#include <stdio.h>

/*

 c function to swap two variables using temp variable

*/

void swap_temp(int *ptr1,int *ptr2){
	
	int temp = *ptr1;
	   *ptr1 = *ptr2 ;
	   *ptr2 = temp;
	
}
/*

 c function to swap two variables without using temp variable
 
  Both Arithmetic solutions may cause an arithmetic overflow. 
 
  If x and y are too large, addition and multiplication may go out of the integer range.
 
*/
void swap_temp_add(int *ptr1,int *ptr2){
	
	*ptr1 = *ptr1 + *ptr2;
	*ptr2 = *ptr1 - *ptr2;
	*ptr1 = *ptr1 - *ptr2;
	
}
/*

 c function to swap two variables without using temp variable and multiplication and division-based approach

 The multiplication and division-based approach doesn’t work if one of the numbers is 0 
 as the product becomes 0 irrespective of the other number.


*/
void swap_temp_multiply_div(int *ptr1,int *ptr2){
	
	if(*ptr2 != 0){
		
		*ptr1 = *ptr1 * *ptr2;
		*ptr2 = *ptr1 / *ptr2;
		*ptr1 = *ptr1 / *ptr2;	
	
	}
	else {
		*ptr2 = *ptr1;
		*ptr1 = 0;
	}

}
/*

 c function to swap two variables without using temp variable and Bitwise XOR 

*/
void swap_temp_xor(int *ptr1,int *ptr2){
	
	*ptr1 = *ptr1 ^ *ptr2;
	*ptr2 = *ptr1 ^ *ptr2;
	*ptr1 = *ptr1 ^ *ptr2;
	
}
/*

 c function to swap three variables without using temp variable and Bitwise XOR 

*/
void swapThree(int *ptr1,int *ptr2,int *ptr3)
{
    // Store XOR of all in *ptr1
    *ptr1 = *ptr1 ^ *ptr2 ^ *ptr3;
 
    // After this, *ptr2 has value of *ptr1
    *ptr2 = *ptr1 ^ *ptr2 ^ *ptr3;
 
    // After this, *ptr3 has value of *ptr2
    *ptr3 = *ptr1 ^ *ptr2 ^ *ptr3;
 
    // After this, *ptr1 has value of *ptr3
    *ptr1 = *ptr1 ^ *ptr2 ^ *ptr3;
}

int main(){
	int x,y,z;
	printf("Enter number 1:\n");
	scanf("%d",&x);
	printf("Enter number 2:\n");
	scanf("%d",&y);
	printf("Enter number 3:\n");
	scanf("%d",&z);
	
	printf("two variables before Swapping : x = %d, y = %d\n", x, y);
	
	swap_temp(&x,&y);
	
	printf("two variables After Swapping using temp: x = %d, y = %d\n", x, y);
	
	swap_temp_xor(&x,&y);
	
	printf("two variables After Swapping without using temp return to origin: x = %d, y = %d\n", x, y);

	printf("three variables before Swapping : x = %d, y = %d, z = %d \n", x, y, z);
	
	swapThree(&x,&y,&z);
	
	printf("three variables After Swapping : x = %d, y = %d, z = %d \n", x, y, z);
	
	return 0;
}