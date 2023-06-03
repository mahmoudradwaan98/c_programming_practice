#include<stdio.h>

/*

 c function to reverse an array

*/

void reverse_array(int *arr,int size){
	
	int low  = 0;
	int high = size-1;
	
	while(low < high)  
    {  
        int temp = arr [ low ] ;  
        arr [ low ] = arr [ high ] ;  
        arr [ high ] = temp ; 
		
		low++;
		high--;
    }  
	
}
/*

 c function to print an array

*/
void print_array(int *arr , int size){
	
	for(int i=0;i<size;i++){
		printf("%d\t", arr[i]);
	}
	
}
int main(){
	
	// Enter array size	
	int n;
	printf("Enter array size :\n");
	scanf("%d",&n);
	
	// allocate dynamic memory using malloc() function
	
	int *ptr_arr = (int*) malloc(sizeof(int)*n);
	// get array numbers from user
	printf("Enter numbers\n");
	for(int i=0;i<n;i++){
		printf("Enter number index %d :\n",i);
		scanf("%d",&ptr_arr[i]);
	}
	
	// print array 
	print_array(ptr_arr,n);
	// array reverse
	reverse_array(ptr_arr,n);
	// print array after reverse
	printf("\n");
	print_array(ptr_arr,n);
	return 0;
}