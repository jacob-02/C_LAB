#include<stdio.h>
int prime1(int n);
int main()
{
    int n,prime;

    printf("Enter a number : ");
    scanf("%d",&n);

    prime = prime1(n);

    if(prime == 1)
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);
}

int prime1(int n)
{       
    int i = 2;

    while(i <= n/2)
    {
        if(n%i == 0)
            return 0;

        else
            i++;
    }

    return 1;
} 