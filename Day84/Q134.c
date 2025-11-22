#include <stdio.h>
enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};
int main() {
    enum Status s;
    printf("Enter status (0 = SUCCESS, 1 = FAILURE, 2 = TIMEOUT): ");
    scanf("%d", &s);
    switch (s) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed. Please try again.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out. Check your connection.\n");
            break;
        default:
            printf("Invalid status value!\n");
    }
    return 0;
}
