#include<stdio.h>
int main (){
    int a ,b , temp;
    printf("Enter number a :");
    scanf("%d",&a);

    printf("Enter number b:");
    scanf("%d",&b);

    temp=a;
    printf("temp is %d\n",temp);

    a=b;
    printf("a is %d\n",a);

    b=temp;
    printf("b is %d\n",b);




    return 0;



}
