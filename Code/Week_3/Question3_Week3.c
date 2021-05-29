#include <stdio.h>

int armstrong(int n)
{
    int digit,sum = 0,num;
    num = n;

    while(num!=0)
    {
        digit = num % 10;
        sum += digit * digit * digit;
        num = num / 10;
    }

    return(n == sum);
}

int perfect(int n)
{
    int sum = 0,num;
    num=n;

    for(int i = 1; i < num; i++)
    {
        if(num % i == 0)
            sum += i;
    }

    return(n == sum);
}

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);

    if(armstrong(n))
        printf("The number is an armstrong number\n");
    else 
        printf("The number is not an armstrong number\n");

    if(perfect(n))
        printf("The number is a perfect number\n");
    else
        printf("The number is not a perfect number\n");
}