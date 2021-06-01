#include <stdio.h>

void fib(int n)
{
    int a = 0, b = 1;
    int term = a + b;

    printf("Fibonacci Series: \n%d \n%d \n", a, b);

    while ((n - 1) != 0)
    {
        printf("%d \n", term);
        a = b;
        b = term;
        term = a + b;
        n--;
    }
}