#include <stdio.h>

/* replace each string of one or more blanks by a single blank */
int main()
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c != ' ')
            putchar(c);
        if (c == ' ') {
            while ((c = getchar()) == ' ')
                ;
            putchar(' ');
            putchar(c);
        }
    }
}
