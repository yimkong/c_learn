#include <stdio.h>

int main(void) {
    char a_static[] = { 'q', 'w', 'e', 'r', '\0' };
    char b_static[] = { 'a', 's', 'd', 'f', '\0' };

    printf("value of a_static: %s\n", a_static);
    printf("value of b_static: %s\n", b_static);
    return 0;
}