#include <stdio.h>

int main()
{
    int n, oct;

    printf("Enter the value of decimal that you want to convert\n");
    scanf("%d", &n);

    oct = conversion(n);
    printf("The octal of %d is : %d\n", n, oct);
}

int conversion(int n)
{
    int oct = 0, temp = 1;

    while (n != 0)
    {
        oct = oct + n%8 + temp;
        n = n/8;
        temp = temp * 10;
    }
    return oct;    
}