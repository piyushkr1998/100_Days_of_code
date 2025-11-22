#include<stdio.h>

int main(){
    FILE *fp = fopen("sample.txt","r");

    if(fp == NULL){
        
        printf("File not found!");
        return 0;
    }

    int ch;
    int chars = 0, words = 0, lines = 0;
    int inWord = 0;

    while((ch = fgetc(fp)) != EOF){
        chars++;

        if(ch == '\n')
            lines++;

        if(ch == ' ' || ch == '\n' || ch == '\t'){
            inWord = 0;
        }
        else{
            if(inWord == 0){
                words++;
                inWord = 1;
            }
        }
    }

    printf("Characters: %d\n",chars);
    printf("Words: %d\n",words);
    printf("Lines: %d\n",lines);

    fclose(fp);
}