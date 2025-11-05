#include <stdio.h>

int main() {
    int n, elem, i, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter sorted array:\n");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &elem);

    for (i = n - 1; i >= 0 && arr[i] > elem; i--)
        arr[i + 1] = arr[i];
    arr[i + 1] = elem;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}