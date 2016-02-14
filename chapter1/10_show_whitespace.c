#include <stdio.h>

/* show tabs as character constants in input */
int main()
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
            continue;
        }
        putchar(c);
    }

    return 0;
}
