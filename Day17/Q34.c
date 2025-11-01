#include <stdio.h>

int main() {
    int n, i, c = 0;
    printf("Enter your number: ");
    scanf("%d", &n);
    if(n <= 1)
        printf("Not Prime\n");
    else {
        for(i = 2; i < n; i++) {
            if(n % i == 0) {
                c = 1;
                break;
            }
        }
        if(c == 0)
            printf("Prime\n");
        else
            printf("Not Prime\n");
    }
    return 0;
}