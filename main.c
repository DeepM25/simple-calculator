#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
int main(){
    char operator = '\0';
    float num1 = 0.0;
    float num2 = 0.0;
    float result = 0.0;
    printf("Enter the operator (+ - * /): ");
    scanf(" %c",&operator);
    printf("Enter first number: ");
    scanf(" %f",&num1);
    printf("Enter second number: ");
    scanf(" %f",&num2);

    switch(operator){
        case '+':
           result = num1 + num2;
           printf("%.2f",result);
           break;
        case '-':
           result = num1 - num2;
           printf("%.2f",result);
           break;
        case '*':
           result = num1 * num2;
           printf("%.2f",result);
           break;
        case '/':
            if(num2 == 0){
              printf("Not divisible by Zero.");
              break;
           }
           result = num1/num2;
           printf("%.2f",result);
           break;
        default:
            printf("Enter correct operator.");
    }

    

    

    
    return 0;
}
