#include <stdio.h>

#define IN 1
#define OUT 0

/* print input one word at a time */
int main()
{
   int c;
   int state = OUT;

   while ((c = getchar()) != EOF) {
       if (c == ' ' || c == '\n' || c == '\t') {
           state = OUT;
           putchar('\n');
       }
       else {
           state = IN;
           putchar(c);
       }
   }
}
