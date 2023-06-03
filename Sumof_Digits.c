#include<stdio.h>

/*

 c function to return sum of Digits of int number

*/

int sumofdigits_fun(int num){
	
	int sum=0;
	while(num!=0){
		
		sum += num %10;
		num /= 10;
	}
	return sum;
}

int main(){
	
	int n;
	printf("Enter number :\n");
	scanf("%d",&n);

	printf("sum of digits of %d = %d",n,sumofdigits_fun(n));	
	return 0;
}