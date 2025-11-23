#include <stdio.h>
enum Gender {
    MALE = 1,
    FEMALE,
    OTHER
};
struct Person {
    char name[50];
    enum Gender gender;
};
int main() {
    struct Person p;
    printf("Enter name: ");
    scanf("%s", p.name);
    printf("Select gender (1 = MALE, 2 = FEMALE, 3 = OTHER): ");
    scanf("%d", &p.gender);
    printf("\nName: %s\n", p.name);
    switch (p.gender) {
        case MALE:
            printf("Gender: Male\n");
            break;
        case FEMALE:
            printf("Gender: Female\n");
            break;
        case OTHER:
            printf("Gender: Other\n");
            break;
        default:
            printf("Invalid gender!\n");
    }
    return 0;
}
