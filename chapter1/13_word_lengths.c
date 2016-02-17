#include <stdio.h>

#define IN 1    /* inside a word */
#define OUT 0   /* outside a word */

/* print a histogram of the length of words in input */
int main()
{
    int c, wlen;
    int state = OUT;
    int lens[13];

    for (int i = 0; i < 12; ++i)
        lens[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            ++lens[wlen-1];
            wlen = 0;
        }
        else {
            state = IN;
            ++wlen;
        }
    }

    for (int i = 0; i < 12; ++i) {
        printf("%3d |", i+1);
        for (int j = 0; j < lens[i]; ++j)
            printf("x");
        printf("\n");
    }
}
