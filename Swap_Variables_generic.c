/* 

generic function that can swap variables of any C data type

The C library function void *memcpy(void *dest, const void *src, size_t n) copies n characters from memory area src to memory area dest.

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Swap(void *x,void *y,size_t bytes);

int main(void)
{
    float x = 3.0, y = 4.0;
    Swap(&x,&y,sizeof(int));
    printf("x now : %f\n",x);
    printf("y now : %f\n",y);
    return 0;
}
void Swap(void *x,void *y,size_t bytes)
{
    void *tmp = malloc(bytes);
    memcpy(tmp,x,bytes);
    memcpy(x,y,bytes);
    memcpy(y,tmp,bytes);
    free(tmp);
}