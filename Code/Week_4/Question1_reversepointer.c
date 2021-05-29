#include <stdio.h>
#include "function.h"

int reverse_pointer(int n, int array[])
{    
    printf("Array elements :\n");
    for(int i = n-1; i >= 0; --i)
        printf("%d ", array[i]);
}