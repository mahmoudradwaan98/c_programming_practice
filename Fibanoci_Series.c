#include<stdio.h>

/*

 Fibanoci Series function without Recursion

	f(n) = f(n-1)+ f(n-2)

*/

int fib_fun(int num){
	
	// Declare array to store Fibanoci number
	int arr[num+2];
	
	// 0,1 number seeds
	arr[0] = 0;
	arr[1] = 1;
	
	// 
	for(int i=2;i<= num;i++){
		
		arr[i] = arr[i-1] + arr[i-2]; 
	}
	return arr[num];
}
/*

 Fibanoci Series function using Space Optimized Method

	f(n) = f(n-1)+ f(n-2)

*/

int fibSOM_fun(int num){
	
	// Declare some variables
	int a = 0 , b =1 , c;
	
	if (num==0){
		return a;
	}
	else if(num==1){
		return b;
	}
	
	for(int i=2;i<= num;i++){
		
		c = a+b;
		a = b;
		b = c;
	}
	return b;
}

/*

 Fibanoci Series function with Recursion

*/
int fibREC_fun(int num)
{
	if (num <= 1)
		return num;
	return fibREC_fun(num - 1) + fibREC_fun(num - 2);
}

int main(){
	
	int n;
	printf("Enter number:\n");
	scanf("%d",&n);
	
	printf("Fibanoci Series function without Recursion = %d\n", fib_fun(n));
	printf("Fibanoci Series function using Space Optimized Method = %d\n", fibSOM_fun(n));
	printf("Fibanoci Series function with Recursion = %d\n", fibREC_fun(n));
	return 0;
}