#include<stdio.h>

/*

 c function to check if number is prime or not

	prime numbers : whole numbers greater than 1 whose only factor are 1 and istself
	Examples      : 2,3,5,7,11,13,17,19,23,29
*/

void prime_fun(int num){
	
	int i;
	
	for(i=2;i<=num;i++){
	
		if(num%i==0){
			break;
		}
	}
	
	if(num == i){
		printf("number %d is prime",num);
	}
	else{
		printf("number %d is not prime",num);
	}
	
}

int main(){
	
	// Enter number to check if prime or not	
	int n;
	printf("Enter number:\n");
	scanf("%d",&n);
	
	prime_fun(n);
	
	return 0;
}