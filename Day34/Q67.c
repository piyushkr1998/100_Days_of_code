#include <stdio.h>

int main() {
    int n, pos, elem, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n + 1];

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter position and element: ");
    scanf("%d %d", &pos, &elem);

    for (i = n; i >= pos; i--) arr[i] = arr[i - 1];
    arr[pos - 1] = elem;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}