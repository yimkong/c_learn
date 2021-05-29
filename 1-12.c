#include <stdio.h>
#define IN 1
#define OUT 2

int main(int argc, char const *argv[]) {
    int c, nl, nw, nc, state;
    state = OUT;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') ++nl;
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            if (nc != 1) {
                putchar('\n');
            }

            state = IN;
            ++nw;
            putchar(c);
        } else {
            putchar(c);
        }
    }
    printf("\n%d %d %d\n", nl, nw, nc);

    return 0;
}
