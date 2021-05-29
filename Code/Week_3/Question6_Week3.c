#include <stdio.h>
int fact(int n);

int main()
{
    int sum = 0;
    sum = fact(1)/1 + fact(2)/2 + fact(3)/3 + fact(4)/4 + fact(5)/5;
    printf("The sum of the given expression is %d\n", sum);
}

int fact(int n)
{
    int sum = 1;

    for(int i = 1; i <= n; i++)
        sum = sum * i;
    
    return sum;
}