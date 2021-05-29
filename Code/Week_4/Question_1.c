#include <stdio.h>
#include "Question1_reverseindex.c"
#include "Question1_reversepointer.c"

int main()
{
    printf("Enter the size of the array :\n");
    int n;
    scanf("%d", &n);

    int array[n];

    printf("Enter the elements of the array :\n");

    for(int i = 0; i < n; i++)
        scanf("%d", &array[i]);
    
    reverse_index(n, array);
    printf("\n");
}