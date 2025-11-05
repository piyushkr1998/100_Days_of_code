#include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter k (rotate right by): ");
    scanf("%d", &k);

    k = k % n; // handle large k
    for (int i = 0; i < k; i++) {
        int last = arr[n - 1];
        for (int j = n - 1; j > 0; j--) arr[j] = arr[j - 1];
        arr[0] = last;
    }

    printf("Array after rotation:\n");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}