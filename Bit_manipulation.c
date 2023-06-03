/*

   c functions to set , clear , toggle , get bit

*/
#include <stdio.h>

char set_bit(char var,char index){
	return var |= (1<<index);
}

char clear_bit(char var,char index){
	return var &= (~(1<<index));
}

char toggle_bit(char var,char index){
	return var ^= (1<<index);
}

char get_bit(char var,char index){
	return (var>>index) & 1 ;
}

int main() {
    // Write C code here
    char x = 1;
    printf("x now is %d\n",x);
	printf("x after set bit 5 is %d\n",set_bit(x,5));
	printf("x after clear bit 5 is %d\n",clear_bit(x,5));
	printf("x after toggle bit 1 is %d\n",toggle_bit(x,1));
	printf("get bit 1 now = %d\n",get_bit(x,1));
    return 0;
}