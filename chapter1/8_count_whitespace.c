#include <stdio.h>

/* count the number of blanks, tabs, and newlines in input */
int main()
{
    int c;
    int spaces = 0;
    int tabs = 0;
    int newlines = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\t')
            ++tabs;
        if (c == ' ')
            ++spaces;
        if (c == '\n')
            ++newlines;
    }
    printf("spaces: %d\n", spaces);
    printf("tabs: %d\n", tabs); 
    printf("newlines: %d\n", newlines);

    return 0;
}
