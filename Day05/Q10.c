#include<stdio.h>
int main (){
    int totalsec , hour , min , sec ;
    printf("Enter time in sec:");
    scanf("%d",&totalsec);

    hour = totalsec / 3600;
    min = (totalsec % 3600) / 60 ;
    sec = totalsec % 60 ;

    printf("Time = %d:%d:%d\n",hour,min,sec);

    return 0;
}