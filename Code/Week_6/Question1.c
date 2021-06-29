#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows of pascal's triangle that you need\n");
    scanf("%d", &n);

    int array[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (i == j + 1 || j == 0)
                array[i][j] = 1;
            else
                array[i][j] = i - 1;
        }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            printf("%d ", array[i][j]);
        printf("\n");
    }
}