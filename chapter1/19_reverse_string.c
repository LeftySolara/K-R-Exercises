#include <stdio.h>
#define MAXLINE 1000    /* maximum input length */

int getln(char line[], int maxline);
void reverse(char line[], char rev[], int len);

/* reverse the given input line */
int main()
{
    int len;
    char line[MAXLINE];
    while (len = getln(line, MAXLINE)) {
        for (int i = len-1; i >= 0; --i)
            putchar(line[i]);
        putchar('\n');
    }
    return 0;
}

/* getln: read a line into s, return length */
int getln(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    s[i] = '\0';
    return i;
}
