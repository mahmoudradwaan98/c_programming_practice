#include <stdio.h>

/*
 Digit Frequency in c Hacker Rank
 
	Given a string, s, consisting of alphabets and digits, 
	find the frequency of each digit in the given string.

*/

int main(){
	
	int arr[9] = {0};
	char *str = (char*) malloc(sizeof(char)*1000);
	scanf("%s",str);
	
	for(int i=0;str[i]!='\0';i++){
		
		if( str[i] >= '0' && str[i] <= '9' ){
			arr[str[i]-48]++;
		}
		
	}
	
	for(int i=0;i<=9;i++){
		printf("%d  ",arr[i]);
	}
	free(str);
	return 0;
}