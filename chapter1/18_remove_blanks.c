#include <stdio.h>
#define MAXLINE 1000    /* maximum input size */

typedef enum { false,true } bool;

int getln(char line[], int maxline);
bool blank(char line[], int len);
void clean(char line[], int len);

/* remove trailing blanks and tabs, delete blank lines */
int main()
{
    int len = 0;
    char line[MAXLINE];

    while ((len = getln(line, MAXLINE)) > 0) {
        if (blank(line, len))
            continue;
        clean(line, len);
        printf("%s\n", line);
    }
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

/* blank: determine whether the given line is blank */
bool blank(char s[], int len)
{
    char ch;
    for (int i = 0; i < len; ++i) {
        ch = s[i];
        if (ch!='\n' && ch!=' ' && ch!='\t')
            return 0;
    }
    return 1;
}

/* clean: remove trailing whitespace characters from input line */
void clean(char line[], int len)
{
    int i = len-1;
    char ch = line[i];
    while (ch==' ' || ch=='\t' || ch=='\n') {
        line[i] = '\0';
        ch = line[--i];
    }
}
