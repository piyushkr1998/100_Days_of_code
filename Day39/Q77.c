#include <stdio.h>
int main() {
    int n, distinct = 1;
    scanf("%d", &n);
    int a[n][n], d[n];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d", &a[i][j]);

    for(int i=0;i<n;i++)
        d[i] = a[i][i];

    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(d[i] == d[j])
                distinct = 0;

    if(distinct) printf("Distinct diagonals");
    else printf("Not distinct");
}