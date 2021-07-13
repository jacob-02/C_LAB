#include <stdio.h>

int even(int x)
{
    return x % 2 == 0;
}

int less(int x)
{
    return x < 22;
}

int binarySearch(int a[], int start, int end, int key, int (*q)(int))
{
    int pos = -1, mid;

    if (start > end)
    {
        return pos;
    }
    else
    {
        mid = (start + end) / 2;

        if (a[mid] == key && q(key))
        {
            pos = mid;
        }

        else if (key < a[mid])
        {
            return binarySearch(a, start, mid - 1, key, q);
        }

        else
            return binarySearch(a, mid + 1, end, key, q);
    }
    return pos;
}

int main()
{
    int a[] = {10, 12, 14, 15, 17, 18, 20, 23};

    printf("Enter the number to be searched in the given array\n");

    for (int i = 0; i < 8; i++)
    {
        printf("%d  ", a[i]);
    }
    
    printf("\n");

    int n = sizeof(a) / sizeof(*a);
    int key;

    scanf("%d", &key);
    int p = binarySearch(a, 0, n - 1, key, even);

    if (p != -1)
    {
        printf("It is even and found in the position %d\n", p);
    }
    else
        printf("It is not even/found\n");

    p = binarySearch(a, 0, n - 1, key, less);

    if (p != -1)
    {
        printf("It is less than 22 and found in the position %d\n", p);
    }
    else
        printf("It is not less than 22/found\n");
}