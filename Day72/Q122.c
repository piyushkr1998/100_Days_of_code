#include<stdio.h>

int main(){
    FILE *fp;
    fp = fopen("info.txt","r");

    if(fp == NULL){
        
        printf("File not found!");
        return 0;
    }

    char line[200];

    while(fgets(line,200,fp) != NULL){

        printf("%s", line);
    }

    fclose(fp);
}