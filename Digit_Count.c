
#include <stdio.h>

#define SIZE 10

/*

c function to count no of occurrances of certain number in array


*/
int count_func(int *a[],int num){
    
    int result = 0;
    
    for(int i=0 ; i < SIZE ; i++){
        
        if(a[i] == num){
            result++;
        }
    }
    
    return result;
}




int main() {
    
    // Write C code here
    int key;
    printf("Enter key: \n");
    scanf("%d",&key);
    
    int *arr[10] = {5,6,9,5,2,1,3,54,2,5};
    
    printf("no of occurance of %d = %d", key , count_func(&arr,key) );

    return 0;
}

/* 

c function to count no of occurrances of max number in array and max number itself


*/

int count_maxfun(int *a[],int *max){
    
    *max = a[0];    
    
    for(int i=0 ; i < SIZE ; i++){
        if( a[i] >= *max){
           *max = a[i];
        }
    }
    
    int max_result = 0;
    
    for(int i=0 ; i < SIZE ; i++){
        
        if(a[i] == *max){
            max_result++;
        }
    }
    
    return max_result;
}




int main() {
    
    // Write C code here
    int max_key;
    
    int *arr[10] = {5,6,9,5,2,1,3,54,2,5};
    
    printf("no of occurance of max value = %d\n", count_maxfun(&arr,&max_key) );
    printf("Max value is %d ", max_key);
    return 0;
}


