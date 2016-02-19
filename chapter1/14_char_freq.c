#include <stdio.h>

/* print a histogram of the frequencies of different characters in input
 * case-insensitive */
int main()
{
    int c;
    int freqs[36];

    for (int i = 0; i < 37; ++i)
        freqs[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9')
            ++freqs[c-48];
        else if (c >= 'A' && c <= 'Z')
            ++freqs[c-55];
        else if (c >= 'a' && c <= 'z')
            ++freqs[c-87];
    }

    for (int i = 0; i < 10; ++i) {
        printf("%d |", i);
        for (int j = 0; j < freqs[i]; ++j)
            printf("x");
        printf("\n");
    }

    char ch = 'A';
    for (int i = 10; i < 35; ++i) {
        printf("%c |", ch);
        for (int j = 0; j < freqs[i]; ++j)
            printf("x");
        printf("\n");
        ++ch;
    }
}
