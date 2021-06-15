#include <stdio.h>

int main()
{
    int array[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            array[i][j] = 1;
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i + j == 4)
                array[i][j] = 0;

            if (i + j >= 5)
                array[i][j] = -1;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (array[i][j] == 1)
                printf("%d  ", array[i][j]);
            else
                printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}