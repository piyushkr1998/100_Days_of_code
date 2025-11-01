#include <stdio.h>

int main() {
    int n, first, last, temp, digits = 1, div = 1;
    printf("Enter your number: ");
    scanf("%d", &n);
    temp = n;
    last = n % 10;
    while(temp >= 10) {
        temp = temp / 10;
        digits++;
        div = div * 10;
    }
    first = temp;
    n = n % div;
    n = n / 10;
    int swapped = last * div + n * 10 + first;
    printf("After swapping: %d\n", swapped);
    return 0;
}