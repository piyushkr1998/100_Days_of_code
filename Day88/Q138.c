#include <stdio.h>
enum Color {
    RED = 1,
    GREEN,
    BLUE,
    YELLOW
};
int main() {
    enum Color c;   
    const char *names[] = {"RED", "GREEN", "BLUE", "YELLOW"};  
    for (c = RED; c <= YELLOW; c++) {
        printf("%s = %d\n", names[c - 1], c);
    }
    return 0;
}
