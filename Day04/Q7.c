#include<stdio.h>
int main(){

    int a, b;
    printf("Enter number a:");
    scanf("%d",&a);
    
    printf("Enter number b:");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swapping a=%d , b=%d\n",a,b);

    return 0;
    
}