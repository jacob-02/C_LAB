#include <stdio.h>
#include <string.h>
int countchar(char *s)
{
    int i, j, count;
    int len = strlen(s);
    for (i = 0; i < len; i++)
    {
        count = 0;
        for (j = 0; j < len; j++)
            if (s[i] == s[j] && s[j] != '\0')
                count++;
        if (count > 1)
        {
            for (j = 0; j < len; j++)
                if (s[i] == s[j] && i != j)
                    s[j] = '\0';
        }
        if (s[i] != '\0')
        {
            printf("%c occurs %d times.\n", s[i], count);
        }
    }
}