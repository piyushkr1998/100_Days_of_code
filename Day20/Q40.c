#include <stdio.h>

int main() {
    long n;
    printf("Enter a binary number: ");
    scanf("%ld", &n);
    printf("1's complement: ");
    while(n > 0) {
        if(n % 10 == 0)
            printf("1");
        else
            printf("0");
        n = n / 10;
    }
    printf("\n");
    return 0;
}