#include <stdio.h>

int main() {
    int num, binary[32], i = 0;

    
    printf("Enter a number: ");
    scanf("%d", &num);

   
    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

   
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    
    printf("Binary: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
