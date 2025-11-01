#include<stdio.h>
int main (){
    float celsius , fahrenihet ;
    printf ("Enter the tempture in celsius:");
    scanf("%f", & celsius);

    fahrenihet = (celsius * 1.8) + 32 ;
    printf("Tempture in fahrenihet is %f",fahrenihet);

    return 0;
    
}