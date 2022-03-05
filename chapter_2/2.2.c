#include <stdio.h>

int main(char s[], int lim)
{
    int i, c;
    while (i < lim)
    {
        if ((c = getchar()) != '\n')
        {
            if (c != EOF)
            {
                s[i] = c;
            }
        }
    }
}