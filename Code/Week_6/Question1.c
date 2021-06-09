#include <stdio.h>

int main()
{
    int array[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(i == j + 1 || j == 0)
                array[i][j] = 1;
            else
                array[i][j] = (i + j + 1);
        }   
    }

    // printf("%d\n", array[10][10]);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", array[i][j]);
        }  
        printf("\n");
    }   
}