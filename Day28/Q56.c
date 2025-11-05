#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}