#include<stdio.h>

/*

 c function to return Factorial using Iterative Method

*/

int Factorial_Iterative_fun(int num){
	
	int result=1;
	
	for(int i=num;i>0;i--){
		
		result *= i;
	}
	
	return result;
}

/*

 c function to return Factorial using Recursive Method

*/

int Factorial_Recursive_fun(int num){
	
	if(num==1){
		return 1;
	}
	else{
		return num * Factorial_Recursive_fun(num-1);
	}
	
}

int main(){
	
	
	int n;
	printf("Enter number:\n");
	scanf("%d",&n);
	printf("Factorial using Iterative Method = %d\n",Factorial_Iterative_fun(n));
	printf("Factorial using Recursive Method = %d",Factorial_Recursive_fun(n));
	return 0;
}