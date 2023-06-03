#include<stdio.h>
#include<stdlib.h>
/*

 c function to get average of an array

*/

float average_array(int *arr,int size){
	
	int sum = 0;
	float average =0;
	
	for(int i=0;i<size;i++){
	
		sum += arr[i];
	}
	
	average = (float)sum / (float)size;
	return average;
}

int main(){
	
	// Get array size	
	int n;
	printf("Enter array size:\n");
	scanf("%d",&n);
	
	// allocate memory dynamically using Malloc function
	int *ptr_arr = (int*) malloc(sizeof(int) * n);
	
	// get numbers from user
	printf("Enter array numbers:\n");
	for(int i=0;i<n;i++){
		printf("number index %d:\n",i);
		scanf("%d",&ptr_arr[i]);
	}
	printf("Average of array numbers = %f",average_array(ptr_arr,n));
	return 0;
}