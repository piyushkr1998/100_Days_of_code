#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    int i, lastSpace=0;
    printf("Enter full name: ");
    gets(name);

    printf("Initials: %c", name[0]);
    for (i=0; name[i]!='\0'; i++)
        if (name[i]==' ')
            lastSpace=i;

    for (i=1; i<lastSpace; i++)
        if (name[i-1]==' ')
            printf(".%c", name[i]);

    printf(" %s", &name[lastSpace+1]);
    return 0;
}