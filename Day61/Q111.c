#include<stdio.h>

int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&k);

    int i=0, j=0;

    while(j<n){
        if(j-i+1<k){
            j++;
        }
        else{
            int f=0;
            for(int x=i;x<=j;x++){
                if(arr[x]<0){
                    printf("%d ",arr[x]);
                    f=1;
                    break;
                }
            }
            if(f==0) printf("0 ");
            i++;
            j++;
        }
    }
}