#include <stdio.h>
int main() {
    char date[20], day[3], mon[3], year[5];
    char *months[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int m;
    printf("Enter date (dd/mm/yyyy): ");
    gets(date);

    day[0]=date[0]; day[1]=date[1]; day[2]='\0';
    mon[0]=date[3]; mon[1]=date[4]; mon[2]='\0';
    year[0]=date[6]; year[1]=date[7]; year[2]=date[8]; year[3]=date[9]; year[4]='\0';

    sscanf(mon, "%d", &m);
    printf("%s-%s-%s", day, months[m-1], year);
    return 0;
}