/* 

	C function to reverse bits of an 8-bit number. Example: 11010010 --> 01001011
	 ip : 210 --> op : 75
     ip : 11010010
     op : 01001011
	
*/

#include <stdio.h>

int main() {
  
    static unsigned char num = 210;
    unsigned char reserved_num = 0;
    
    for (int i = 0;i<8;i++){
        char bit = (num>>i)&1;
        printf("bit %d value %d\n",i,bit);
        
    if(bit==0){
         reserved_num &= (~(1<<8-1-i));
    }
    else if(bit==1){
         reserved_num |= (1<<8-1-i);
    }
}

    printf("reserved num = %d",reserved_num);
    

    return 0;
}



























 