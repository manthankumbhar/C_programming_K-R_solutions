#include <stdio.h>

int escape(char s[], char t[])
{
    {

        int i, j;

        i = j = 0;

        while (t[i] != '\0')
        {
            switch (t[i])
            {
            case '\t':
                s[j] = '\\';
                ++j;
                s[j] = 't';
                break;
            case '\n':
                s[j] = '\\';
                ++j;
                s[j] = 'n';
                break;
            default:
                s[j] = t[i];
                break;
            }
            ++i;
            ++j;
        }

        s[j] = '\0';
    }
}
