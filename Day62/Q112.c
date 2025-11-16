#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    int max = arr[0];
    int cur = arr[0];

    for(int i=1;i<n;i++){
        if(cur + arr[i] < arr[i])
            cur = arr[i];
        else
            cur = cur + arr[i];

        if(cur > max)
            max = cur;
    }

    printf("%d",max);
}