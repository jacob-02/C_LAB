#include <stdio.h>

void my_strcat(char *d, const char *s)
{
    while (*d)
    {
        d++;
    }
    while (*d++ = *s++);
}

char *my_strncat(char *d1, const char *s1, int n)
{
    for (int i = 0; i < n; i++)
    {
        my_strcat(d1, s1);
    }
    return d1;
}