/*
a)Write a program to generate a multiplication table using for loop
b)Write a program to print the following pattern
*
* *      
* * *         
* * * *
* * * * *


#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number that you want to get the multiplication table : ");
    scanf("%d", &n);
    for (int i=1;i<=10;i++)
        printf("%d X %d = %d\n", n, i, n*i);
}
*/

#include <stdio.h>

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            printf("*");
        printf("\n");
    }
}