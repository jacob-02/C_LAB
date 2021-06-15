#include <stdio.h>

int main()
{
    int m, n, count = 0;
    printf("Enter the number of rows and columns in the 2D array\n");
    scanf("%d%d", &m, &n);

    if (m != n)
    {
        printf("The matrix is not symmetric\n");
        return 0;
    }

    printf("Enter the elements of the %d X %d array\n", m, n);

    int array[m][n];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &array[i][j]);

    int temp[n][m];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            temp[i][j] = array[j][i];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (temp[i][j] == array[i][j])
                count++;

    if (count == m * n)
    {
        printf("The matrix is symmetric\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                printf("%d ", array[i][j]);
            printf("\n");
        }
    }

    else
    {
        printf("The matrix is non symmetric\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                printf("%d ", array[i][j]);
            printf("\n");
        }
    }
}