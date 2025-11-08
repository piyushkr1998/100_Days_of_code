#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d", &a[i][j]);

    printf("Diagonal traversal:\n");
    for(int i=0;i<n;i++)
        printf("%d ", a[i][i]);
}