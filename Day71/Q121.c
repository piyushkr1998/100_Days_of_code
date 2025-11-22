#include<stdio.h>

int main(){
    FILE *fp;
    fp = fopen("info.txt","w");

    if(fp == NULL){
        printf("File not created!");
        return 0;
    }

    char name[50];
    int age;

    printf("Enter name: ");
    scanf("%s",name);

    printf("Enter age: ");
    scanf("%d",&age);

    fprintf(fp,"Name: %s\nAge: %d\n",name,age);

    fclose(fp);

    printf("Data saved successfully!");
    
}