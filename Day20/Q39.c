#include <stdio.h>

int main() {
    int n, r, p = 1, f = 0;
    printf("Enter your number: ");
    scanf("%d", &n);
    while(n > 0) {
        r = n % 10;
        if(r % 2 != 0) {
            p = p * r;
            f = 1;
        }
        n = n / 10;
    }
    if(f == 0)
        printf("No odd digits\n");
    else
        printf("Product of odd digits: %d\n", p);
    return 0;
}