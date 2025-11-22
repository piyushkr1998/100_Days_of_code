#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fin, *fout;
    char ch;    
    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error: input.txt not found!\n");
        return 1;
    }   
    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error: Could not create output.txt\n");
        return 1;
    }  
    while ((ch = fgetc(fin)) != EOF) {
        ch = toupper(ch);  
        fputc(ch, fout);  
    }   
    fclose(fin);
    fclose(fout);
    printf("Conversion complete! Check output.txt\n");
    return 0;
}
