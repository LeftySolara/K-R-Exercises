#include <stdio.h>
#define MAXLINE 1000    /* maximum input size */
#define MINLINE 80      /* shortest line length that will be printed */

int getln(char line[], int maxline);

/* print input lines longer than 80 characters */
int main()
{
    int len;
    char line[MAXLINE];

    while ((len = getln(line, MAXLINE)) > 0)
        if (len > MINLINE)
            printf("%s", line);

    return 0;
}

/* getln: read a line into s, return length */
int getln(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
