#include <stdio.h>
int main() {
    char str[100];
    int freq[26]={0}, i;
    printf("Enter a string: ");
    gets(str);

    for (i=0; str[i]!='\0'; i++) {
        if (str[i]>='a' && str[i]<='z') {
            if (freq[str[i]-'a']>0) {
                printf("First repeating lowercase: %c", str[i]);
                return 0;
            }
            freq[str[i]-'a']++;
        }
    }
    printf("No repeating lowercase alphabet");
    return 0;
}