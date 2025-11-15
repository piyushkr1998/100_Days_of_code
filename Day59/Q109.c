#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int max = -1000000000;

    for(int i=0; i<=n-k; i++){
        int s = 0;
        for(int j=i; j<i+k; j++){
            s += arr[j];
        }
        if(s > max) max = s;
    }

    printf("%d", max);
    return 0;
}