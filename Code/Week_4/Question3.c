#include <stdio.h>
#include "Question3_uniqueElement.h"

int main()
{
    int a[100], n;
    
    printf("Enter the number of elements in the array\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    
    int i = 0;
    
    while (i < n)
    {
        scanf("%d", &a[i]);
        i++;
    }
    
    uniqueElement(a, n);
}