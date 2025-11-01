#include<stdio.h>
int main (){
    float principle , rate , time , SI , CI , amount ;

    printf("Enter principle value:");
    scanf("%f",&principle);

    printf("Enter rate :");
    scanf("%f",&rate);

    printf("Enter time :");
    scanf("%f",&time);

    SI = principle * rate * time / 100;
    amount = principle * pow((1 + rate / 100), time );
    CI = amount - principle  ;

    printf("SI is %f\n",SI);
    printf("CI is %f\n",CI);

    return 0 ;
}    