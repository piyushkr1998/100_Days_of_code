#include<stdio.h>
int main (){
    int length , breadth, area , perimeter;
    printf("Enter length :");
    scanf("%d",&length);

    printf("Enter breadth:");
    scanf("%d",&breadth);

    area= length*breadth;
    printf("area is %d\n",area);

    perimeter= 2 * (length+breadth);
    printf("perimeter is %d\n",perimeter);

    return 0;

}