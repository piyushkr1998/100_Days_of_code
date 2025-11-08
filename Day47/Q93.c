#include <stdio.h>
int main() {
    char s1[100], s2[100];
    int count1[26]={0}, count2[26]={0}, i;

    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    for (i=0; s1[i]!='\0'; i++)
        if (s1[i]>='a'&&s1[i]<='z') count1[s1[i]-'a']++;
        else if (s1[i]>='A'&&s1[i]<='Z') count1[s1[i]-'A']++;

    for (i=0; s2[i]!='\0'; i++)
        if (s2[i]>='a'&&s2[i]<='z') count2[s2[i]-'a']++;
        else if (s2[i]>='A'&&s2[i]<='Z') count2[s2[i]-'A']++;

    for (i=0; i<26; i++)
        if (count1[i]!=count2[i]) {
            printf("Not anagrams");
            return 0;
        }
    printf("Anagrams");
    return 0;
}