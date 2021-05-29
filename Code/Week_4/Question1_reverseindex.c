#include <stdio.h>
#include "function.h"

int reverse_index(int n, int array[])
{   
    printf("Array elements :\n");
    for(int i = 0; i < n; i++)
        printf("%d ", array[i]);
    
    printf("\n");

    printf("Reversed elements :\n");
    for(int i = n-1; i >= 0; --i)
        printf("%d ", array[i]);
}
