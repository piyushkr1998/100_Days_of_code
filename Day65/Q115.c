#include<stdio.h>
#include<string.h>

int main(){
    char s[200], t[200];
    scanf("%s %s",s,t);

    if(strlen(s)!=strlen(t)){
        printf("Not Anagram");
        return 0;
    }

    int count[26]={0};

    for(int i=0;s[i];i++){
        count[s[i]-'a']++;
        count[t[i]-'a']--;
    }

    for(int i=0;i<26;i++){
        if(count[i]!=0){
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
}