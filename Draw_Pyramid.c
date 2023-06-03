#include<stdio.h>

/*

 c function to draw a half pyramid

*/

void Draw_HalfPyramid(int rows){
    int i,j;
    // outer loop  
    for(i=1;i<=rows;i++){
        // inner loop  
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}

/*

 c function to draw a Full pyramid

*/
void Draw_FullPyramid(int rows){
    int i,j;
    // outer loop  
    for(i=1;i<=rows;i++){
        // inner loop  
        for(j=1;j<=2*rows-1;j++){
			if((j>=rows-(i-1))&&(j<=rows +(i-1))){
				printf("* ");
			}
			else{
				printf(" ");
			}
            
        }
        printf("\n");
    }
}

int main(){
	
	int rows;  
    printf (" Enter a number of rows Half Pyramid: ");  
    scanf("%d", &rows);  
    Draw_HalfPyramid(rows);
	printf("                   ");
	Draw_FullPyramid(rows);
	
	return 0;
}