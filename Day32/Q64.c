#include <stdio.h>

int main() {
    int num, digit, freq[10] = {0}, max = 0, most;
    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (freq[i] > max) {
            max = freq[i];
            most = i;
        }
    }

    printf("Digit %d occurs the most (%d times)\n", most, max);
    return 0;
}