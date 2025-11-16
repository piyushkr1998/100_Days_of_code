#include<stdio.h>
#include<string.h>

int main(){
    char s[1000];
    scanf("%s",s);

    int last[256];
    for(int i=0;i<256;i++) last[i] = -1;

    int max=0, start=0;

    for(int i=0;s[i]!='\0';i++){
        if(last[s[i]] >= start)
            start = last[s[i]] + 1;

        last[s[i]] = i;

        if(i-start+1 > max)
            max = i-start+1;
    }

    printf("%d",max);
}