#include <stdio.h>
/*

 c function take two double variables and return division and reminder

*/
double div_fun(double num,double den, int *cpy_remind){

    double div;
    
    if(den!=0){
        
        div = num / den; 
        *cpy_remind = (int)num % (int)den;
    
        return div;
    }
    else{
        printf("division by zero");
        return 1;
    }
    

}


int main() {
    
    // Write C code here
    double num_value;
    double den_value;
    int reminder;
    
    printf("Enter value of numerator: \n");
    scanf("%lf",&num_value);
    
    printf("Enter value to denominator: \n");
    scanf("%lf",&den_value);

    printf("remind result = %d, div result = %lf\n", reminder,div_fun(num_value,den_value,&reminder) );

    return 0;
}