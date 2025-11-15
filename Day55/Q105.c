#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    for(int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }

    int ans = -1;
    for(int i=0; i<n; i++){
        int c = 0;
        for(int j=0; j<n; j++){
            if(nums[j] == nums[i]) c++;
        }
        if(c > n/2){
            ans = nums[i];
            break;
        }
    }

    printf("%d", ans);
    return 0;
}
    