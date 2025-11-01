#include <stdio.h>
int main() {

    float a, b, c, d;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;

    if (d > 0) {
        printf("Roots are Real and Distinct\n");
    }
    else if (d == 0) {
        printf("Roots are Real and Equal\n");
    }
    else {
        printf("Roots are imaginary\n");
    }
    
    return 0;
}