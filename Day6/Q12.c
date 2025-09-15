#include<stdio.h>
int main (){
    int num ;
    printf("Enter any number num:");
    scanf("%d",&num);

    if  (num >= 0) {
        if (num == 0) {
            printf("%d is zero number\n",num);

        }else {
            printf("%d is positive number\n",num);
        }
    }else {
        printf("%d is negative number\n",num);
    }
    

    return 0;
}