#include<stdio.h>
int main(void)
{
	int a,b;
	printf("Enter two integer numbers: ");
	scanf("%d%d",&a,&b);
	if(a>=b){
		while(b<=a){
			printf("%d\n",a);
			a--;
		}
	}
	else{
		while(a<=b){
			printf("%d\n",b);
			b--;
		}
	}
	return 0;
}
