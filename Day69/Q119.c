#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    int seen[100000]={0};

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        seen[arr[i]]++;

        if(seen[arr[i]]==2){
            printf("%d",arr[i]);
            break;
        }
    }
}