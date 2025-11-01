#include<stdio.h>
int main (){

    int unit, bill, n1, n2, n3;

    printf("Input Units: ");
    scanf("%d", &unit);

    if( unit <= 100){
        bill = unit*5;
        printf("Bill: %d\n", bill);
    }
    else if( unit >100 && unit<=200){
        n1 = unit-100;
        bill = n1*7 + 500;
        printf("Bill: %d\n", bill);
    }
    else if( unit >200 && unit <= 300){
        n2 = unit -200;
        bill = n2*10 + 1200;
        printf("Bill: %d\n", bill);
    }
    else if ( unit >300){
        n3 = unit-300;
        bill = n3*12 + 2200;
        printf("Bill: %d\n", bill);
    }

    return 0;
}
