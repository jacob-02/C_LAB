#include <stdio.h>


void uniqueElement(int a[], int n)
{
    int i, j, count = 1;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j] && i != j)
                break;
        }
        if (j == n)
        {
            printf("Unique elements in the array are %d\n", a[i]);
            ++count;
        }
    }
}