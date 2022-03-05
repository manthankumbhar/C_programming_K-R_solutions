#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c, nw, state;
    nw = 0;
    state = IN;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            putchar('\n');
            putchar(c);
        }
        else
        {
            putchar(c);
        }
    }
}