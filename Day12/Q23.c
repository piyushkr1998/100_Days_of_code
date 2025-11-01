#include <stdio.h>

int main() {
    int days;
    int fine = 0;

    
    printf("Enter number of days late: ");
    scanf("%d", &days);

    
    if (days <= 0)
        printf("No fine.\n");
    else if (days <= 5)
        fine = days * 2;
    else if (days <= 10)
        fine = (5 * 2) + (days - 5) * 4;
    else if (days <= 30)
        fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
    else {
        printf("Membership Cancelled.\n");
        return 0;
    }

    
    if (days <= 30 && days > 0)
        printf("Total Fine = ₹%d\n", fine);

    return 0;
}
