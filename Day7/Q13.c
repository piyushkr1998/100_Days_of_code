#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    
    printf((year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) 
           ? "Leap Year\n" 
           : "Not a Leap Year\n");

    return 0;
}
