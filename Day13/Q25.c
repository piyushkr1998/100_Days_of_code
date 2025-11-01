#include<stdio.h>

int main (){

    float a,b,sum,diff,mult,div;
    char op;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    printf("\nChoose a operator:\na. +\nb. -\nc. *\nd. /\n\n");
    scanf("%s", &op);

    switch (op) {
        
        case '+' : sum = a+b;
                 printf("Sum is %f\n\n", sum);
                 break;

        case '-' : diff = a-b;
                 printf("Difference is %f\n\n", diff);
                 break;

        case '*' : mult = a*b;
                 printf("Multiplication is %f\n\n", mult);
                 break;

        case '/' : 
                 if (b==0)
                     printf("Invalid input\n\n");
                 else {
                     div = a/b;
                     printf("Division is %f\n\n",div);
                 }
                 break;

        default : printf("Invalid Input\n\n");
    }

    return 0;
}