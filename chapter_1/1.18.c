#include <stdio.h>
#include <stdlib.h>
#define MAX_BUF_LEN 1000
int main()
{
    int buf[MAX_BUF_LEN] = {
        0,
    };
    int idx = 0;
    int ch;
    int len;

    while ((ch = getchar()) != EOF)
    {
        if (ch == ' ' || ch == '\t')
        {
            buf[idx] = ch;
            len++;
            idx++;
            if (idx >= MAX_BUF_LEN)
            {
                printf("ERROR: no buffer left\n");
                exit(0);
            }
        }
        else if (ch == '\n')
        {
            if (idx > 0)
            {
                if (len != idx)
                {
                    putchar(ch);
                }
                idx = 0;
            }
            else if (idx == 0)
            {
                putchar(ch);
            }
        }
        else
        {
            len++;
            if (idx > 0)
            {
                int j = 0;
                for (j = 0; j < idx; j++)
                {
                    putchar(buf[j]);
                }
                putchar(ch);
                idx = 0;
            }
            else if (idx == 0)
            {
                putchar(ch);
            }
        }
    }
    return 0;
}