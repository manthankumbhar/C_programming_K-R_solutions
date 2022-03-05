#include <stdio.h>
#include <string.h>

void squeeze(char *s1, const char *s2);

int main()
{
    char s1[10] = "hello";
    char *s2 = "world";

    printf("Before Squeeze s1 is %s\n", s1);

    squeeze(s1, s2);

    printf("After Squeeze s1 is %s\n", s1);

    return 0;
}

void squeeze(char *s1, const char *s2)
{
    int i, j;
    int k = 0;
    for (i = 0; i < strlen(s1); i++)
    {
        for (j = 0; j < strlen(s2); j++)
        {
            if (s1[i] == s2[j])
                break;
        }
        if (j == strlen(s2))
        {
            s1[k++] = s1[i];
        }
    }
    s1[k] = '\0';
    return 0;
}