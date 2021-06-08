#include <string.h>
int strend(char *s, char *t)
{
    int i, j, len_s, len_t, res, count = 0, flag = 0;
    len_s = strlen(s);
    len_t = strlen(t);
    for (i = len_s; i > 0; i--)
    {
        if (s[i] == ' ')
        {
            count++;
            for (j = 0; j < len_t; j++)
            {
                if (s[i + 1] == t[j])
                {
                    i++;
                }
                else
                {
                    flag++;
                }
            }
            res = i;
        }
        if (count > 0)
        {
            i = 0;
        }
    }
    if (count > 0 && flag > 0 && res == len_s)

        return 0;

    else if (count > 0 && flag == 0 && res == len_s)

        return 1;

    else
        return 0;

}