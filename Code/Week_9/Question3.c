#include <stdio.h>

void read(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void disp(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}

void insertion_sort(int *a, int n)
{
    int j, temp;
    for (int i = 0; i < n; i++)
    {
        temp = a[i];
        j = i;
        while (j > 0 && temp < a[j - 1])
        {
            a[j] = a[j - 1];
            --j;
        }
        a[j] = temp;
    }
}

int main()
{
    int a[100], n;

    printf("Enter the number of elements to sort\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);
    read(a, n);

    printf("Before sorting\n");
    disp(a, n);

    insertion_sort(a, n);

    printf("After sorting\n");
    disp(a, n);
}