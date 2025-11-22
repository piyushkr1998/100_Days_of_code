#include<stdio.h>

int main(){
    
    char src[50], dest[50];

    printf("Source file: ");
    scanf("%s",src);

    printf("Destination file: ");
    scanf("%s",dest);

    FILE *fs = fopen(src,"r");
    FILE *fd = fopen(dest,"w");

    if(fs == NULL){
        printf("Source not found!");
        return 0;
    }

    int c;

    while((c = fgetc(fs)) != EOF){
        fputc(c,fd);
    }

    fclose(fs);
    fclose(fd);

    printf("Copied successfully!");
}