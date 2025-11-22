#include<stdio.h>

int main(){
    FILE *fp;
    
    fp = fopen("info.txt","a");

    if(fp == NULL){
        printf("File not found!");
        return 0;
    }

    char text[200];

    printf("Enter text to append: ");
    getchar();
    fgets(text,200,stdin);

    fputs(text,fp);

    fclose(fp);

    printf("Text appended!");
}