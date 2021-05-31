#include <stdio.h>

int main()
{
    int arr[100], n, max = 0, min = 0;

    printf("Enter the number of elements in the array :\n");
    scanf("%d", &n);
    printf("Enter the values of the array :\n");

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    max = arr[0];
    min = arr[0];
    
    for(int i = 0; i < n; i++)
    {

        if(arr[i] > max)
            max = arr[i];
        
        if(arr[i] < min)
            min = arr[i];
    }

    printf("The Maximum element is %d\nThe Minimum element is %d\n", max, min);
}